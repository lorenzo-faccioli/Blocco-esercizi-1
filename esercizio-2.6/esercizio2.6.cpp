#include <iomanip>
#include <iostream>

using namespace std;



float toFahrenheit(float);
float toCelsius(float);
int main (){

    cout<<"GRADI CELCIUS";
    cout<<" | ";
    cout<<"GRADI FAHNRENHEIT"<<endl;

     for (float i=-40.00; i<250.25; i+= 0.25){
        
        cout<<setw(10)<<setprecision(10)<< i<<"C  |  "<<toFahrenheit(i)<<"F"<<endl;
    }

return 0;   

}

    float toFahrenheit(float Celsius){
   
        for (float i=-40.00; i<250.25; i+= 0.25){
            float Fahrenheit= (i*1.8)+32;
            return Fahrenheit;
       
        }
    }

    float toCelsius(float Fahrenheit){

        for(float i=-40.00; i<482;i+=77){
            float Celsius=(i-32)*1.8;
            return 0;
        }
    }