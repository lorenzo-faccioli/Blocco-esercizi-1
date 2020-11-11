/*program that calculates the hypotenuse of a triangle 
 given the two catheti
*/

#include <iostream>
#include <cmath>

using namespace std;

double calcIpo(double , double );

int main(){

    double catA, catB, ipotenusa;

    cout<<"dammi il primo cateto del triangolo"<<endl;
    cin>> catA;

    cout<<"dammi il secondo cateto del triangolo"<<endl;
    cin>> catB;

    ipotenusa= calcIpo(catA,catB);
    cout<<"Se il primo cateto vale "<<catA<<" e il secondo cateto vale "<<catB
        <<" sll'ora l'ipotenusa vale "<<ipotenusa;

    return 0;

}


double calcIpo (double a, double b){
    double risultato;
    a=pow(a,2.00);
    b=pow(b,2.00);
    risultato= a*b;
    risultato= sqrt(risultato);
    return risultato;


}