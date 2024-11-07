#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;

class Car
{
private:
    string brand; //Automerkki
    string model; //Auton malli
    int yearModel; //Auton valmistusvuosi
public:
    Car();
    void printData();         //tulostaa auton merkin, mallin ja valmistusvuoden.
    void setBrand(const string &newBrand);   //asettaa auton merkin.
    void setModel(const string &newModel);   //asettaa auton mallin.
    void setYearModel(int newYearModel);  //asettaa auton valmistusvuoden.
};

#endif // CAR_H
