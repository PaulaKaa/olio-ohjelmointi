#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include "wheel.h"
class Car
{
private:
    string model;
    string brand;

    Engine objEngine;

    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;

public:
    Car();
    Car(string, string);
    void setEngine();
    void setWheels();
    string getModel() const;
    void setModel(const string &newModel);
    string getBrand() const;
    void setBrand(const string &newBrand);
    void printDetails();
};

#endif // CAR_H
