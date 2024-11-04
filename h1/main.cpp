#include <iostream>
#include "h1funktiot.h"
using namespace std;

int main()
{
    int a, b;

    //Kysy luku ja tallenna luvut muuttujiin. Käytä cin ja cout
    cout << "Anna luku" << endl;
    cin >> a;

    cout << "Anna toinen luku" << endl;
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    int palautusSumma = retSum(a, b);
    cout << "Toinen summa " << palautusSumma << endl;
    float palautusJako = retDiv(a, b);
    cout << "Toinen osamaara " << setprecision(2) << palautusJako << endl;

    return 0;
}
