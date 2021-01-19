#include <cstdlib>
#include <ctime>


#include <iostream>
#include <cmath>


using namespace std;
void odpocet(int sekunda)
{



    bool nadisielCas = false;
    while (!nadisielCas)
    {
        if (sekunda > 0)
        {
            cout << "Do roztocenia ostava: " << sekunda << " sekund!!!\n";
            sekunda--;
        }
        else
        {
            cout << "Nastava roztocenie!!!";
            nadisielCas = true;
        }
    }
}



int main() {
    srand((int)time(0));

    int cervena[3] = { 1, 2, 3 };
    int cierna[3] = { 2, 4, 6 };
    int zelena = 0;
    int sekunda = 3;
    char volba;

    int cislo = (rand() % 7);
    cout << "farba: " << endl;

    cout << "a)cierna" << endl;
    cout << "b)cervena" << endl;
    cout << "c)zelena" << endl;
    cin >> volba;


#include <iostream>
    using namespace std;



    if (volba == 'a') {
        odpocet(sekunda);
        cout << "a)cierna" << endl;
        for (int i = 0; i < 3; i++) {
            if (cislo == cierna[i]) {

                cout << "vyhral si" << endl;
                cout << cislo << endl;
                return 0;
            }


        }
        cout << "prehral si" << endl;

    }

    else if (volba == 'b') {
        odpocet(sekunda);
        cout << "b)cervena" << endl;
        for (int i = 0; i < 3; i++) {
            if (cislo == cervena[i]) {


                cout << "vyhral si" << endl;
                cout << cislo << endl;
                return 0;
            }
        }
        cout << "prehral si" << endl;
    }


    else if (volba == 'c') {
        odpocet(sekunda);
        cout << "c)zelena" << endl;
        if (cislo == zelena) {

            cout << "vyhral si" << endl;
            cout << cislo << endl;
            return 0;
        }
        else {

            cout << "prehral si" << endl;
        }
    }
    cout << cislo << endl;
    return 0;

}