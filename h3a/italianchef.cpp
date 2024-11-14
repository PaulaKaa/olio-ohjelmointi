#include "italianchef.h"

ItalianChef::ItalianChef(string italianName):Chef(italianName) {
    name = italianName;
     cout<<"ItalianChef "<<name<<" konsturktori"<<endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Italian Chef "<<name<<" makes pasta"<<endl;
}

ItalianChef::~ItalianChef() {
    cout<<"ItalianChef "<<name<<" dekonsturktori"<<endl;
}
