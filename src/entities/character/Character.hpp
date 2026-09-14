#pragma once

#include <string>

class Character
{
        private:
                std::string name;
                int health;
        
        public:
                Character (const std::string& name, int health)
                : name(name), health(health) 
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

                virtual void attack (Character& target) = 0;
};