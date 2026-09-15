#pragma once

#include "Entities.hpp"
#include "Combat.hpp"
#include <memory>
#include "Logging.hpp"
#include "AttackCommand.hpp"

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
                                AttackCommand attackCommandOne(charOne, charTwo);
                                attackCommandOne.execute();
                                logger.logf(charOne.getName(), " attacks ", charTwo.getName());
                                logger.logf(charTwo.getName(), " HP: ", charTwo.getHealth(), '\n');

                                if (!charTwo.isAlive())
                                {
                                        break;
                                }

                                AttackCommand attackCommandTwo(charTwo, charOne);
                                attackCommandTwo.execute();
                                logger.logf(charTwo.getName(), " attacks ", charOne.getName());
                                logger.logf(charOne.getName(), " HP: ", charOne.getHealth(), '\n');
                        }
                }
};