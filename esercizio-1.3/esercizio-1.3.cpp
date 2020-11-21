/* program tha determines if a number made up of five 
figures is palindrome
*/

#include <iostream>
using namespace std;

bool Pal(int);

int main()
{
    int valore;
    cout << "dammi il numero da controllare";
    cin >> valore;
    Pal(valore);

    if (Pal(valore) == true) {
        cout << "il numero " << valore << " risulta essere palindromo";
    } else {
        cout << "il numero " << valore << " non risulta essere  palindromo";
    }
    return 0;
}

bool Pal(int num)
{

    bool risultato = true;
    int primaDig = num % 100000;
    primaDig = primaDig / 10000;

    int ultimaDig = num % 10;
    int secondaDig = num % 10000;
    secondaDig = secondaDig / 1000;

    int quartaDig = num % 100;
    quartaDig = quartaDig / 10;

    if (primaDig == ultimaDig && secondaDig == quartaDig) {
        return risultato;
    } else {
        return risultato = false;
    }
}