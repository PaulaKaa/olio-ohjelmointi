#include "animal.h"
#include "dog.h"

#include <iostream>
using namespace std;

int main()
{
    Animal *elain;
    elain = new Animal;
    elain->callOut();

    Dog *koira;
    koira = new Dog;
    koira->callOut();


    delete elain;
    elain=nullptr;

    delete koira;
    koira=nullptr;



    return 0;
}
