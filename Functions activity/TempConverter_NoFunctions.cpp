#include <iostream>
using namespace std;
int main() {
    double n, m; 
    char choice; 

    cout<<"Temperature Converter"<< endl;
    cout<<"1 - Celsius To Fahrenheit"<< endl;
    cout<<"2 - Fahrenheit to Celsius"<<endl;
    cout<<"Enter choice: ";
    cin>> choice;

    switch(choice){
        case '1':
        cout<<" Enter temperature in Celsius: ";
        cin>> n;
        m = (n * 9.0/5.0 )+ 32;
        cout<<"Result: "<< n << "C = "<< m <<"F";
        break;

        case '2':
        cout<<" Enter temperature in Fahrenheit: ";
        cin>> n;
        m = (n - 32) * 5.0/9.0;
        cout<<"Result: "<< n << "F = "<< m <<"C";
        break;
        
        default:
        cout<<"Not a command"<<endl;
    }
    
    return 0;
}
