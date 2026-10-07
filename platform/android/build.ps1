param([ValidateSet('debug', 'release', 'bundle')][string]$Kind = 'debug')
$ErrorActionPreference = 'Stop'
$root = (Resolve-Path (Join-Path $PSScriptRoot '..\..')).Path
$task = @{ debug = 'assembleDebug'; release = 'assembleRelease'; bundle = 'bundleRelease' }[$Kind]
Push-Location $PSScriptRoot
try {
    & .\gradlew.bat --no-daemon $task
    if ($LASTEXITCODE -ne 0) { throw "Gradle failed with exit code $LASTEXITCODE" }
    $dist = Join-Path $root 'dist\android'
    New-Item -ItemType Directory -Force -Path $dist | Out-Null
    if ($Kind -eq 'bundle') {
        $source = 'app\build\outputs\bundle\release\app-release.aab'
        $name = 'fruit-ninja-release.aab'
    } else {
        $apk = if ($Kind -eq 'debug') { 'app-debug.apk' } elseif ($env:ANDROID_KEYSTORE) { 'app-release.apk' } else { 'app-release-unsigned.apk' }
        $source = Join-Path "app\build\outputs\apk\$Kind" $apk
        $name = "fruit-ninja-$Kind.apk"
    }
    Copy-Item -LiteralPath $source -Destination (Join-Path $dist $name) -Force
    Write-Host "Output: $dist"
} finally { Pop-Location }
