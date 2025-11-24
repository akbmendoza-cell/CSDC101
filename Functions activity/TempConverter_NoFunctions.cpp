#include <iostream>
using namespace std;

int main()
{
    int Fahrenheit, Celsius;
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
       cin>>Celsius;
       Fahrenheit = (Celsius * 9 / 5) + 32;
       cout<<"Result: "<<Fahrenheit<< "F"<<endl;
       break;
       
       case '2':
       cout<<"Enter Temperature in Fahrenheit: ";
       cin>>Fahrenheit;
       Celsius= (Fahrenheit - 32) * 5/9;
       cout<<"Result: "<<Celsius<< "C"<<endl;
       break;
       
       default:
       cout<<"that is not a command";
   }
    cout<<"Do you want to move again? (y/n)";
    cin>>again;
    } while (again == 'y' || again == 'Y');
    
    return 0;
}
