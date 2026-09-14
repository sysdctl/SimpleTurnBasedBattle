#pragma once

#include "Entities.hpp"
#include <iostream>

#include "Combat.hpp"
#include <memory>

class Battle
{
        public:
                void fight (Character& charOne, Character& charTwo)
                {
                        while (charOne.isAlive() && charTwo.isAlive())
                        {
                                if (charOne.getHealth() < 5) {charOne.setAttackStrategy(std::make_unique<SwordAttack>()); std::cout<< "Changed to Sword" <<'\n';}
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