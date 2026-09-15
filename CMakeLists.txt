cmake_minimum_required(VERSION 3.28)

project(SimpleTurnBasedBattle LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_SCAN_FOR_MODULES OFF) # increasing build speed

#=============== blocks and links ===============#

add_executable(SimpleTurnBasedBattle
    src/main.cpp
)

#=============== Has include API ===============#

target_include_directories(SimpleTurnBasedBattle
    PRIVATE
        #block_of "Entities.hpp"
        ${CMAKE_SOURCE_DIR}/src/entities
        #interface "Character.hpp"
        ${CMAKE_SOURCE_DIR}/src/entities/character

        #block_of "Battle.hpp"
        ${CMAKE_SOURCE_DIR}/src/battle
        #interface ---------------

        #block_of "Combat.hpp"
        ${CMAKE_SOURCE_DIR}/src/combat
        #interface "AttackStrategy.hpp"
        ${CMAKE_SOURCE_DIR}/src/combat/strategy

        #block_of "CharacterFactory.hpp"
        ${CMAKE_SOURCE_DIR}/src/factory
        #assets
                #"EnemyType.hpp"
        ${CMAKE_SOURCE_DIR}/src/factory

        #block_of "Logging.hpp"
        ${CMAKE_SOURCE_DIR}/src/logging
        #interface "Logger.hpp"
        ${CMAKE_SOURCE_DIR}/src/logging/logger
)