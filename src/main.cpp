
#include "Entities.hpp"
#include "Battle.hpp"
#include "Combat.hpp"

#include <iostream>
#include <memory>

int main ()
{
        Player player("hamed", 10, std::make_unique<HandAttack>());
        Enemy enemy("Zombie", 20, std::make_unique<HandAttack>());

        std::cout << player.getName() << " HP : " << player.getHealth() <<'\n';
        std::cout << enemy.getName() << " HP : " << enemy.getHealth() <<'\n'<<'\n';


        Battle battle;
        battle.fight(player, enemy);


        std::cout <<'\n';
        if (player.isAlive())
        {
                std::cout << player.getName() << " won";
        }
        else
        {
                std::cout << enemy.getName() << " won";
        }
}