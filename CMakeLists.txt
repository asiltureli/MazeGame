cmake_minimum_required(VERSION 3.22)

project(DesignPatternsByMazeGame VERSION 1.0.0 LANGUAGES CXX)

set(_EXE_ EXECUTABLE_NAME)
set(_MGN_ MAZE_GAME_NAME)

set(MAZE_LIB_NAME MazeLib)

# Native
set(NATIVE_${_MGN_} NativeMazeGame)
set(NATIVE_${_EXE_} NativeExecutable)

# Abstract Factory
set(ABSTRACT_FACTORY_${_MGN_} AbstractFactoryMazeGame)
set(ABSTRACT_FACTORY_${_EXE_} AbstractFactoryExecutable)

# Factory
set(FACTORY_${_MGN_} FactoryMazeGame)
set(FACTORY_${_EXE_} FactoryMazeExecutable)

# Builder 
set(BUILDER_${_MGN_} BuilderMazeGame)
set(BUILDER_${_EXE_} BuilderMazeExecutable)

#Prototype
set(PROTOTYPE_${_MGN_} PrototypeMazeGame)
set(PROTOTYPE_${_EXE_} PrototypeMazeExecutable)

add_subdirectory(src)
add_subdirectory(app)
