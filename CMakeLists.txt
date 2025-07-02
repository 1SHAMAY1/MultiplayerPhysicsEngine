cmake_minimum_required(VERSION 3.15)
project(MultiplayerPhysicsEngine)

set(CMAKE_CXX_STANDARD 17)
set(SOURCES
    Source/main.cpp
    Source/PhysicsEngine.cpp
    Source/ReplicationManager.cpp
    Source/PredictionManager.cpp
    Source/Serializer.cpp
    Source/Compressor.cpp
    Source/Logger.cpp
)

add_executable(MultiplayerPhysicsEngine ${SOURCES})
