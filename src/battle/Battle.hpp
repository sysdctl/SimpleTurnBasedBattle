#pragma once

#include "Entities.hpp"
#include "Combat.hpp"
#include <memory>
#include "Logging.hpp"

class Battle
{
        private:
                Logger& logger;

        public:
                Battle (Logger& logger) 
                : logger(logger)
                {}

                void fight (Character& charOne, Character& charTwo)
                {
                        while (charOne.isAlive() && charTwo.isAlive())
                        {
                                charOne.attack(charTwo);
                                logger.logf(charOne.getName(), " attacks ", charTwo.getName());
                                logger.logf(charTwo.getName(), " HP: ", charTwo.getHealth(), '\n');

                                if (!charTwo.isAlive())
                                {
                                        break;
                                }

                                charOne.attack(charTwo);
                                logger.logf(charTwo.getName(), " attacks ", charOne.getName());
                                logger.logf(charOne.getName(), " HP: ", charOne.getHealth(), '\n');
                        }
                }
};