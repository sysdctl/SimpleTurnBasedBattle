#pragma once

#include "../character/Character.hpp"
class AttackStrategy;
#include <string>
#include <memory>

class Player : public Character
{
        public:
                Player (const std::string& name, int health, std::unique_ptr<AttackStrategy> attackStrategy_uptr)
                : Character (name, health, std::move(attackStrategy_uptr))
                {}
};