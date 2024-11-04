#include "h1funktiot.h"

void calcSum(int lukuA, int lukuB){
    //Lasketaan kysyttyjen lukujen summa ja tulostetaan tulos
    cout << "Antamiesi lukujen summa on " << lukuA + lukuB << endl;
}

void calcDiv(int lukuA, int lukuB){
    if (lukuB == 0) {
        cout << "Antamasi jakaja on nolla. Jakolaskua ei voida toteuttaa." << endl;
    } else {
        float osamaara =  static_cast<float>(lukuA) / static_cast<float>(lukuB);
        cout << "Antamiesi lukujen osamaara on " << setprecision(2) << osamaara << endl;
    }
}

int retSum(int lukuA, int lukuB){
    return lukuA+lukuB;
}

float retDiv(int lukuA, int lukuB){
    if (lukuB == 0) {
        cout << "Virhe! Jakolaskua ei voida toteuttaa, koska jakaja on nolla" << endl;
        return 0;
    } else {
        float osamaara2 =  static_cast<float>(lukuA) / static_cast<float>(lukuB);
        return osamaara2;
    }
}
