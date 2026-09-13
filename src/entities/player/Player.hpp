#pragma once

#include "../character/Character.hpp"
#include <string>

class Player : public Character
{
        private:
                int handAttack = 5;

        public:
                Player (const std::string& name, int health)
                : Character (name, health)
                {}

                

                void attack (Character& target)
                {
                        target.takeDamage(handAttack);
                }
};