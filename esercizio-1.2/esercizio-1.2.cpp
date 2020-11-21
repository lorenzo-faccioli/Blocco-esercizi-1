/* program that return the single number in a position 
chosen by the user */
#include <iostream>
using namespace std;

int cifra(int x, int y)
{
    if (y != 1) {
        int elevazione = 10, elevazione2 = 10, z = 10;
        for (int i = 1; i < y ; i++) {
            elevazione = elevazione * z;
        }
        for (int i = 2; i < y;  i++) {
            elevazione2 = elevazione2 * z;
        }
        x = x % elevazione;
        x = x / elevazione2;
    } else {
        x=x % 10;
    }

    return x;
}

int main()
{
    int x, risultato, y;

    cout << "dimmi un numero" << endl;
    cin >> x;
    cout << "dimmi l'indice" << endl;
    cin >> y;

    risultato = cifra(x, y);
    cout << "risulta " << risultato;
}
