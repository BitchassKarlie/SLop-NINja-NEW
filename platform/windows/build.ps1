param([switch]$SkipTests, [ValidateSet("x64", "ARM64", "Win32")][string]$Architecture = "x64")
$ErrorActionPreference = 'Stop'
$projectRoot = (Resolve-Path (Join-Path $PSScriptRoot '..\..')).Path
# Use a new build tree so older generated projects/caches cannot affect this repair.
$buildRoot = Join-Path $projectRoot $(if ($Architecture -eq 'x64') { 'build-win-native' } else { 'build-win-' + $Architecture })
$logPath = Join-Path $projectRoot 'windows-build.log'
$fruitBuildLogWriter = $null
try {
    Set-Location -LiteralPath $projectRoot
    if (-not (Get-Command cmake -ErrorAction SilentlyContinue)) {
        throw 'CMake was not found. Install the Visual Studio C++ CMake tools or add CMake to PATH.'
    }
    # One explicit encoding for both the header and all appended output.
    $utf8 = [System.Text.UTF8Encoding]::new($false)
    $fruitBuildLogWriter = [System.IO.StreamWriter]::new($logPath, $false, $utf8)
    $fruitBuildLogWriter.AutoFlush = $true
    $fruitBuildLogWriter.WriteLine('Fruit Ninja Windows build')
    function Invoke-BuildTool {
        param([string]$Tool, [string[]]$ToolArguments)
        $heading = "`r`n> " + $Tool + ' ' + ($ToolArguments -join ' ')
        Write-Host $heading
        $fruitBuildLogWriter.WriteLine($heading)
        # Native stderr is part of the log; its exit code determines failure.
        $savedPreference = $ErrorActionPreference
        $ErrorActionPreference = 'Continue'
        & $Tool @ToolArguments 2>&1 | ForEach-Object {
            $line = $_.ToString()
            Write-Host $line
            $fruitBuildLogWriter.WriteLine($line)
        }
        $toolExitCode = $LASTEXITCODE
        $ErrorActionPreference = $savedPreference
        if ($toolExitCode -ne 0) {
            throw "$Tool failed with exit code $toolExitCode. Full output: $logPath"
        }
    }
    Invoke-BuildTool -Tool 'cmake' -ToolArguments @(
        '-S', $projectRoot, '-B', $buildRoot, '-A', $Architecture,
        '-DFRUIT_USE_SYSTEM_SDL=OFF', '-DFRUIT_BUILD_GAME=ON',
        '-DFRUIT_BUILD_TESTS=ON', '-DFRUIT_BUILD_INSPECTOR=OFF',
        # Configure here once; never reconfigure from parallel MSBuild targets.
        '-DCMAKE_SUPPRESS_REGENERATION=ON', '-DCMAKE_MSVC_RUNTIME_LIBRARY=MultiThreaded'
    )
    # Build the application explicitly before independent test executables.
    Invoke-BuildTool -Tool 'cmake' -ToolArguments @(
        '--build', $buildRoot, '--config', 'Release', '--target', 'fruit_ninja', '--parallel', '4'
    )
    $exePath = Join-Path $buildRoot 'Release\fruit_ninja.exe'
    if (-not (Test-Path -LiteralPath $exePath -PathType Leaf)) {
        throw "Build returned success but the game executable is missing: $exePath"
    }
    Write-Host "Game built: $exePath"
    if (-not $SkipTests) {
        Invoke-BuildTool -Tool 'cmake' -ToolArguments @(
            '--build', $buildRoot, '--config', 'Release', '--target',
            'fruit_core_tests', 'fruit_audio_tests', 'fruit_platform_tests', '--parallel', '4'
        )
        Invoke-BuildTool -Tool 'ctest' -ToolArguments @(
            '--test-dir', $buildRoot, '-C', 'Release', '--output-on-failure'
        )
    }
    $distRoot = Join-Path $projectRoot 'dist'
    $package = Join-Path $distRoot ('windows-' + $Architecture)
    New-Item -ItemType Directory -Force -Path $package | Out-Null
    Copy-Item -LiteralPath $exePath -Destination $package -Force
    $packagedAssets = Join-Path $package 'assets'
    if (Test-Path -LiteralPath $packagedAssets) {
        Remove-Item -LiteralPath $packagedAssets -Recurse -Force
    }
    Copy-Item -LiteralPath (Join-Path $buildRoot 'Release\assets') -Destination $package -Recurse
    Copy-Item -LiteralPath (Join-Path $projectRoot 'platform\BUILDING.md') -Destination $package -Force
    $zipPath = Join-Path $distRoot ('fruit-ninja-windows-' + $Architecture + '.zip')
    Compress-Archive -Path (Join-Path $package '*') -DestinationPath $zipPath -Force
    Write-Host "Package: $zipPath"
    Write-Host "Run: $exePath"
    exit 0
} catch {
    Write-Host $_.Exception.Message -ForegroundColor Red
    Write-Host "If the build failed, send windows-build.log from: $projectRoot"
    exit 1
} finally {
    if ($null -ne $fruitBuildLogWriter) { $fruitBuildLogWriter.Dispose() }
}
