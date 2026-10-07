@echo off
setlocal
where emcmake >nul 2>nul
if errorlevel 1 (
 echo Activate emsdk_env.bat before running this script.
 exit /b 1
)
set "FRUIT_ROOT=%~dp0..\.."
call emcmake cmake -S "%FRUIT_ROOT%" -B "%FRUIT_ROOT%\build-wasm" -G Ninja -DCMAKE_BUILD_TYPE=Release -DFRUIT_BUILD_TESTS=OFF -DFRUIT_BUILD_INSPECTOR=OFF -DFRUIT_USE_SYSTEM_SDL=OFF
if errorlevel 1 exit /b 1
cmake --build "%FRUIT_ROOT%\build-wasm" --target fruit_ninja --parallel 4
if errorlevel 1 exit /b 1
if not exist "%FRUIT_ROOT%\dist\wasm" mkdir "%FRUIT_ROOT%\dist\wasm"
for %%E in (html js wasm data) do (
 if not exist "%FRUIT_ROOT%\build-wasm\index.%%E" exit /b 1
 copy /y "%FRUIT_ROOT%\build-wasm\index.%%E" "%FRUIT_ROOT%\dist\wasm" >nul
 if errorlevel 1 exit /b 1
)
echo Output: %FRUIT_ROOT%\dist\wasm
exit /b 0
