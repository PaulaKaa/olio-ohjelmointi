#ifndef WHEEL_H
#define WHEEL_H

#include <iostream>
using namespace std;


class Wheel
{
private:
    int size;
    string type;

public:
    Wheel();
    int getSize() const;
    void setSize(int newSize);
    string getType() const;
    void setType(const string &newType);
};

#endif // WHEEL_H
