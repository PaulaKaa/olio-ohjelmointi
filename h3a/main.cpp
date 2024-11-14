#include "chef.h"
#include "italianchef.h"
#include <iostream>
using namespace std;

int main()
{
    Chef objKokki = Chef("Gordon Ramsey");
    objKokki.makeSalad();
    objKokki.makeSoup();

    cout<<" "<<endl;

    ItalianChef objKokki2 = ItalianChef("Anthony Bourdain");
    objKokki2.makeSalad();
    objKokki2.makeSoup();
    objKokki2.makePasta();
    cout<<"name of the Italian Chef is "<<objKokki2.getName()<<endl;

    cout<<" "<<endl;
    return 0;
}
