/* program that raises a number to a power
*/
#include <iostream>
using namespace std;

int POT(int x,int y){
    int z=x;
    for(int i=1; i<y; i++){
        x=x*z;
    }
    return x;

}

int POT2(int x,int y){
    int i=1,z=x;
    while (i<y){
    x=x*z;
    i++;
    }
    return x;
}

int main (){
    int x,y,risultato=0,risultato2=0;
    cout<<"dimmi i due valori ";
    cin>>x ;
    cin>> y;

    risultato=POT(x,y);
    cout<<x <<" elevato alla: "<<y<< " equivale a "<<risultato<<endl;

    risultato2=POT2(x,y);
    cout<<x <<" elevato alla "<<y<<" equivale a "<< risultato2;
}