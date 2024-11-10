#include "car.h"

Car::Car(string uusBrand, string uusModel, int uusYearModel) {
    brand = uusBrand;
    model = uusModel;
    yearModel = uusYearModel;
}

void Car::printData()
{
    cout<<"\nAutomerkki "<<brand<< endl;
    cout<<"Auton malli "<<model<< endl;
    cout<<"Auton vuosimalli "<<yearModel<< endl;
}


