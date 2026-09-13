
#include "Entities.hpp"

#include <iostream>

int main ()
{
        Player player("hamed", 10);
        Enemy enemy("Zombie", 30);

        std::cout << player.getName() << " HP : " << player.getHealth() <<'\n';
        std::cout << enemy.getName() << " HP : " << enemy.getHealth() <<'\n';

        player.attack(enemy);

        std::cout <<'\n';
        std::cout << enemy.getName() << " HP : " << enemy.getHealth() <<'\n';
}