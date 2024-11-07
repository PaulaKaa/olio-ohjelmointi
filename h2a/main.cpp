#include <iostream>
#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>

using namespace std;

int main()
{
    //Vaihe 1: Car-luokka
    cout<<"Vaihe 1: Car-luokka"<<endl;
    Car objAuto;
    objAuto.setBrand("Ford");
    objAuto.setModel("Focus");
    objAuto.setYearModel(1999);
    objAuto.printData();

    //Vaihe 2: Rectangle-luokka
    cout<<"\nVaihe 2: Rectangle-luokka"<<endl;
    Rectangle *objSuorakulmio;
    objSuorakulmio= new Rectangle;
    objSuorakulmio->setHeight(2);
    objSuorakulmio->setWidth(4);

    cout<<"Suorakulmion pinta-ala "<<objSuorakulmio->getArea()<<endl;
    cout<<"Suorakulmion ymparysmitta "<<objSuorakulmio->getCircum()<<endl;

    delete objSuorakulmio;
    objSuorakulmio=nullptr;

    //Vaihe 3: Student-luokka
    cout<<"\nVaihe 3: Student-luokka"<<endl;
    unique_ptr<Student> objOpiskelija = make_unique<Student>();
    objOpiskelija->setName("Pirkko");
    objOpiskelija->setStudentNumber(123123);
    objOpiskelija->setAverage(4.2);

    cout<<"Opiskelijan nimi "<<objOpiskelija->getName()<<endl;
    cout<<"Opiskelijanumero "<<objOpiskelija->getStudentNumber()<<endl;
    cout<<"Opiskelijan keskiarvo "<<objOpiskelija->getAverage()<<endl;

    return 0;
}
