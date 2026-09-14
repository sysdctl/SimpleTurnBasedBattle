#pragma once

#include "Entities.hpp";
#include "Combat.hpp";
#include <memory>

class CharacterFactory
{
        public:
                static std::unique_ptr<Player> createPlayer ()
                {
                        return std::make_unique<Player> ("hamed", 10, std::make_unique<HandAttack>());
                }

                static std::unique_ptr<Enemy> createEnemy ()
                {
                        return std::make_unique<Enemy> ("Zombie", 20, std::make_unique<HandAttack>());
                }
};