#ifndef CHEF_H
#define CHEF_H
#include<iostream>
using namespace std;

class Chef
{
public:
    Chef(string newName);
    void makeSalad(void);
    void makeSoup(void);
    ~Chef();
protected:
    string name;
};

#endif // CHEF_H
