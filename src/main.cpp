
#include "Entities.hpp"
#include "Battle.hpp"

#include <iostream>

int main ()
{
        Player player("hamed", 10);
        Enemy enemy("Zombie", 30);

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