#include "Enemy.h"

void Enemy::RandomDirection()
{
    direction = { 0,0 };
    int random = rand() % 4;
    switch (random)
    {
    case 0:
        direction.X = 1;
        break;
    case 1:
        direction.X = -1;
        break;
    case 2:
        direction.Y = 1;
        break;
    case 3:
        direction.Y = -1;
        break;
    }
}