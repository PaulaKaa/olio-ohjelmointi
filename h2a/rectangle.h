#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;

class Rectangle
{
private:
    double width;  //suorakulmion leveys
    double height; //suorakulmion korkeus
public:
    Rectangle();
    double getArea();       //suorakulmion pinta-ala
    double getCircum();     //suorakulmion ympärysmitta
    void setWidth(double uusiLeveys);  //asettaa suorakulmion leveyden.
    void setHeight(double uusiKorkeus); //asettaa suorakulmion korkeuden.
};

#endif // RECTANGLE_H
