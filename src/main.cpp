
#include "Entities.hpp"
#include "Battle.hpp"
#include "Combat.hpp"
#include "CharacterFactory.hpp"
#include "EnemyType.hpp"

#include <iostream>
#include <memory>

int main ()
{
        auto player = CharacterFactory::createPlayer();
        auto enemy = CharacterFactory::createEnemy(EnemyType::Archer);

        std::cout << player->getName() << " HP : " << player->getHealth() <<'\n';
        std::cout << enemy->getName() << " HP : " << enemy->getHealth() <<'\n'<<'\n';


        Battle battle;
        battle.fight(*player, *enemy);


        std::cout <<'\n';
        if (player->isAlive())
        {
                std::cout << player->getName() << " won";
        }
        else
        {
                std::cout << enemy->getName() << " won";
        }
}