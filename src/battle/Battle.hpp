#pragma once

#include "Entities.hpp"

#include <iostream>

class Battle
{
        public:
                void fight (Character& charOne, Character& charTwo)
                {
                        while (charOne.isAlive() && charTwo.isAlive())
                        {
                                charOne.attack(charTwo);
                                std::cout << charOne.getName() << " attacks "<< charTwo.getName() << '\n';
                                std::cout << charTwo.getName() << " HP: " << charTwo.getHealth() << '\n' << '\n';

                                if (!charTwo.isAlive())
                                {
                                        break;
                                }

                                charTwo.attack(charOne);
                                std::cout << charTwo.getName() << " attacks "<< charOne.getName() << '\n';
                                std::cout << charOne.getName() << " HP: " << charOne.getHealth() << '\n' << '\n';
                        }
                }
};