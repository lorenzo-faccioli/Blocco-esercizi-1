#include <iostream>
using namespace std;

/* program that individuates a specific number out of a bigger one 
*/ 
 

int cifraSpecifica (int a[], int x);

int main (){
    int cifra, z, risultato;
    
    cout<<"quanto vuoi che sia lungo il numero?";
    cin>> z;
    int Num[z];
    
    for(int i=0; i<z; i++){
        cout<<"Dammi la cifra "<<i+1;
        cin>> Num[i];
    }
    cout<<"il tuo numero vale: ";
    
    for(int i=0; i<z; i++){
    cout<<Num[i];
    }
    cout<<"quale cifra vuoi? ";
    cin>> cifra;

    risultato=cifraSpecifica(Num[z], cifra);
    cout<<"la cifra che cerchi vale "<<risultato;
return 0;
}


int cifraSpecifica(int a[z] ,int cifra){
    int ritorno=0;

    ritorno=a[cifra-1];
    
return ritorno;
    
}

