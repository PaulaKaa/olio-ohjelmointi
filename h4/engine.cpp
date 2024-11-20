#include "engine.h"

Engine::Engine() {}

Engine::Engine(int, double)
{

}

int Engine::getHorsepower()
{
    return horsepower;
}

void Engine::setHorsepower(int hp)
{
    horsepower = hp;
}

double Engine::getDisplacement()
{
    return displacement;
}

void Engine::setDisplacement(double dp)
{
    displacement = dp;
}
