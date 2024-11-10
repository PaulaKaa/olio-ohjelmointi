#include <iostream>
#include "car.h"
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;

    Car auto1 = Car("Ford", "Focus", 1999);
    Car auto2 = Car("Volkswagen", "Tiguan", 2018);
    Car auto3 = Car("Mercedes Benz", "E200", 2015);

    carList.push_back(auto1);
    carList.push_back(auto2);
    carList.push_back(auto3);

    //Tulostetaan toinen alkio
    carList[1].printData();

    //Tulostetaan kaikki
    for(int i = 0; i<3; i++){
        carList[i].printData();
    }

    return 0;
}
