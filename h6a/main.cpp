#include "myclass.h"
#include <iostream>

using namespace std;

int main()
{
    MyClass *obj1=new MyClass;

    obj1->raiseMySignal();

    delete obj1;
    obj1=nullptr;
    return 0;
}
