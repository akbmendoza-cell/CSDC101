/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>// input and output library
using namespace std;// standard namespace for cin and cout

int main(){
    
    
    float num1,num2,product;// Integet variables
    
    cout<< "Enter a number: ";// output enter number
    cin >>num1;// user input number
    cout<< "Enter another number: ";// output anther number
    cin >> num2;// user input another number
    product = num1 + num2;// product stuff
    cout <<" The sum of the 2 numbers is:" << product;// the produt of the two numbers
    
    
    return 0;
}
