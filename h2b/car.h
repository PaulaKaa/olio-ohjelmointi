#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;

class Car
{
private:
    string brand; //Automerkki
    string model; //Auton malli
    int yearModel; //Auton vuosimalli
public:
    Car(string uusBrand, string uusModel, int uusYearModel);
    void printData();
};

#endif // CAR_H
