#pragma once

#include "Entities.hpp"
#include "Combat.hpp"
#include "EnemyType.hpp"
#include <memory>

class CharacterFactory
{
        public:
                static std::unique_ptr<Player> createPlayer ()
                {
                        return std::make_unique<Player> ("hamed", 10, std::make_unique<HandAttack>());
                }

                static std::unique_ptr<Enemy> createEnemy (EnemyType type)
                {
                        switch (type)
                        {
                        case EnemyType::Zombie :
                                return std::make_unique<Enemy>("Zombie", 20, std::make_unique<HandAttack>());
                        
                        case EnemyType::Archer :
                                return std::make_unique<Enemy>("Archer", 15, std::make_unique<HandAttack>());
                        }
                        return nullptr;
                }
};