#include "car.h"
#include <iostream>

using namespace std;

int main()
{
    Car objAuto;
    objAuto.setBrand("Corolla");
    objAuto.setModel("Toyota");
    objAuto.setEngine();
    objAuto.setWheels();
    objAuto.printDetails();

    return 0;
}
