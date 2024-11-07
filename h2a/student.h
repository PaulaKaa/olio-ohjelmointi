#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;


class Student
{
private:
    string name;
    int studentNumber;
    double average; // opiskelijan keskiarvo
public:
    Student();
    void setName(string uusiNimi);        //asettaa opiskelijan nimen.
    void setStudentNumber(int uusiOpiskelijaNro); //asettaa opiskelijanumeron.
    void setAverage(double uusiKa);    //asettaa opiskelijan keskiarvon.
    string getName();           //palauttaa opiskelijan nimen.
    int getStudentNumber();    //palauttaa opiskelijanumeron(merkkimuotoinen tunniste).
    double getAverage();        //palauttaa opiskelijan keskiarvon.
};

#endif // STUDENT_H
