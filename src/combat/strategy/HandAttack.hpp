#pragma once 

#include "./AttackStrategy.hpp"
#include "Character.hpp"


class HandAttack : public AttackStrategy
{
        public:
                void attack (Character& attacker, Character& target) override
                {
                        target.takeDamage(4);
                }
};