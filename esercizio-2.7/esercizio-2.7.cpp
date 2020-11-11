/*program that calculates the average grade of an exam 
of a certain number of students
*/
 
#include <iostream>
using namespace std;


float mediaVoti(int); 

int main (){
    int numStud;
    float Avg;
    cout<<"quanti studenti hanno partecipato all'esame?"<<endl;
    cin>>numStud;

    Avg=mediaVoti(numStud);
    cout<<"la media dei voti risulta essere "<<Avg;

    return 0;
}



float mediaVoti(int x){
    float media=0.0;
 
    for (int i=0;i<x;i++){
        float voto=0;
        cout<<"dimmi il voto dello studente numero "<<i+1<<endl;
        cin>>voto;
        media=media+voto;
        
    }
    media=media/x;
    return media;
}