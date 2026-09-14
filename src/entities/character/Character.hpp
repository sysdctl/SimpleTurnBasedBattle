#pragma once

#include "AttackStrategy.hpp"
#include <string>
#include <memory>

class Character
{
        private:
                std::string name;
                int health;
                std::unique_ptr<AttackStrategy> attackStrategy_uptr;
        
        public:
                Character (const std::string& name, int health, std::unique_ptr<AttackStrategy> attackStrategy_uptr)
                : name(name), health(health), attackStrategy_uptr(std::move(attackStrategy_uptr))
                {}

                virtual ~Character () = default;



                const std::string& getName () const
                {
                        return name;
                }

                int getHealth () const
                {
                        return health;
                }

                bool isAlive () const
                {
                        return health > 0;
                }



                void takeDamage (int damage)
                {
                        if (damage <= 0) 
                        { 
                                return; 
                        }

                        health -= damage;
                        if (health < 0){ health = 0; }
                }

                void setAttackStrategy (std::unique_ptr<AttackStrategy> inputAttackStrategy_uptr)
                {
                        attackStrategy_uptr = std::move(inputAttackStrategy_uptr);
                }

                void attack (Character& target)
                {
                        attackStrategy_uptr->attack(*this, target);
                }
};