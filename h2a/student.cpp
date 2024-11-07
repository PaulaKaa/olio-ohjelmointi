#include "student.h"

Student::Student() {}

void Student::setName(string uusiNimi)
{
    name = uusiNimi;
}

void Student::setStudentNumber(int uusiOpiskelijaNro)
{
    studentNumber = uusiOpiskelijaNro;
}

void Student::setAverage(double uusiKa)
{
    average = uusiKa;
}

string Student::getName()
{
    return name;
}

int Student::getStudentNumber()
{
    return studentNumber;
}

double Student::getAverage()
{
    return average;
}
