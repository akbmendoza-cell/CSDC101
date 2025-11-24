
#include <iostream>
using namespace std;
void cToFahrenheit(float Celsius){
    Celsius = (Celsius * 9 / 5) +32;
    std::cout<<"Inside: "<<Celsius<<"F"<<endl;
}
void fToCelsius(float &Fahrenheit){
    Fahrenheit = (Fahrenheit - 32) * 5/9;
    std::cout<<"Inside: "<<Fahrenheit<<"C"<<endl;
}

int main()
{
    int Passbyvalue, Passbyreference;
    
    char choices, again; 
    do{
   cout<<"Temperature Converter"<<endl;
   cout<<"1 - Celsius to Fahrenheit"<<endl;
   cout<<"2 - Fahrenheit to Celsius"<<endl;
   cout<<"Enter choice: ";
   cin>>choices;
   switch(choices){
       case '1':
       cout<<"Enter Temperature in Celsius: ";
       cin>>Passbyvalue;
       cout<<"Before: "<<Passbyvalue<<"C"<<endl;
       cToFahrenheit(Passbyvalue);
       cout<<"After: "<<Passbyvalue<<"C"<<endl;
       break;
       
       case '2':
       cout<<"Enter Temperature in Fahrenheit: ";
       cin>>Passbyreference;
       cout<<"Before:"<<Passbyreference<<"F"<<endl;
       cToFahrenheit(Passbyreference);
       cout<<"after: "<<Passbyreference<<"C"<<endl;
       break;
       
       default:
       cout<<"that is not command";
       
       
   }
   
   cout<<"Do you want to try again?(y/n) "<<endl;
   cin>>again;
    }
    while( again == 'y' || again == 'Y');
    return 0;
}
