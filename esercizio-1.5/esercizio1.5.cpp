
#include <iostream>
using namespace std;

/* program that calculates the factorial 
of a number given by the user
*/

long long Factorial(long long);

int main()
{
    long long Numero;
    cout << "dammi il nnumero del quale vuoi sapere il fattoriale";
    cin >> Numero;

    if (Numero < 0) {
        cout << "il numero che mi dai deve essere positivo";

    } else {
        cout << "il fattoriale di " << Numero << " vale " << Factorial(Numero);
    }

    return 0;
}

long long Factorial(long long numInput)
{
    long long numOutput = 1;
    if (numInput != 0) {
        for (int i = 0; i < numInput; i++) {
            numOutput = numOutput * (numInput - i);
        }

    } else {
        numOutput = 1;
    }

    return numOutput;
}