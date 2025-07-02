@echo off
if not exist Build mkdir Build
cd Build
cmake .. -G "MinGW Makefiles"
cmake --build . --config Debug
cd ..
.\Build\MultiplayerPhysicsEngine.exe
pause
