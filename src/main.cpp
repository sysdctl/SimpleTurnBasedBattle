
#include "Entities.hpp"
#include "Battle.hpp"
#include "Combat.hpp"
#include "CharacterFactory.hpp"
#include "EnemyType.hpp"
#include "Logging.hpp"

#include <memory>

int main ()
{
        auto player = CharacterFactory::createPlayer();
        auto enemy = CharacterFactory::createEnemy(EnemyType::Archer);

        ConsoleLogger logger;
        logger.logf(player->getName(), " HP : ", player->getHealth());
        logger.logf(enemy->getName(), " HP : ", enemy->getHealth(), '\n');


        Battle battle(logger);
        battle.fight(*player, *enemy);


        logger.logf('\n');
        if (player->isAlive())
        {
                logger.logf(player->getName(), " won");
        }
        else
        {
                logger.logf(enemy->getName(), " won");
        }
}