#pragma once

#include "../character/Character.hpp"
#include <string>

class Enemy : public Character
{
        private:
                int handAttack = 8;

        public:
                Enemy (const std::string& name, int health)
                : Character (name, health)
                {}


                
                void attack (Character& target)
                {
                        target.takeDamage(handAttack);
                }
};