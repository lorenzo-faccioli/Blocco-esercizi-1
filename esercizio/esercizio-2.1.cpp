#include <iostream>
using namespace std;
/* program that calculates the sum of ten values that are 
inserted by the user
*/



int somma (int x[10]={});

int main (){
    int a[10]={}, valore;
    cout<<"il programma funziona per 10 numeri";
    for(int i=0;i<9;i++){
        cout<<"dammi il numero";
        cin>>a[i];
    }
    valore= somma (a);
    cout<<"la somma  vale "<<valore;
return 0;
}


int somma (int a[10]={})
{
    int variabile=0;
    for (int i=0;i<9;i++){
        variabile=variabile+a[i];
    }
    return variabile;
    }

