#pragma once

#include "./Command.hpp"
#include "Character.hpp"

class AttackCommand : public Command
{
        private:
                Character& charOne;
                Character& charTwo;

        public:
                AttackCommand (Character& charOne, Character& charTwo)
                : charOne(charOne), charTwo(charTwo) 
                {}

                void execute () override
                {
                        charOne.attack(charTwo);
                }
};