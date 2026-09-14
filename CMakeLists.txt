cmake_minimum_required(VERSION 3.28)

project(SimpleTurnBasedBattle LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_SCAN_FOR_MODULES OFF) # increasing build speed

#=============== blocks and links ===============#

#block_of "Entities.hpp"
#block_of "Battle.hpp"
add_executable(SimpleTurnBasedBattle
    src/main.cpp
)

#=============== Has include API ===============#

target_include_directories(SimpleTurnBasedBattle
    PRIVATE
        #block_of "Entities.hpp"
        ${CMAKE_SOURCE_DIR}/src/entities
        #block_of "Battle.hpp"
        ${CMAKE_SOURCE_DIR}/src/battle
)
