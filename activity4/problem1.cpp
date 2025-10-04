/*Problem 1: Basic Pricing Decision

Problem:
You sell one cup of lemonade for $1. If a customer has $1 or more, they can buy a cup.

Task:
Write a program that:
Ask the user how much money they have.
Uses an if statement to determine if they can buy lemonade.

Outputs:
"Enjoy your lemonade!" if they have $1 or more.
"Sorry, you need more money." otherwise.

Sample Input:
Enter your money: 0.75

Sample Output:
Sorry, you need more money.
==============================================================================*/
#include <iostream>
using namespace std;

int main() {
    float money;
    money = 0.75;// variable
    if (money >= 1){//greater or less than condition
        cout<<"Enjoy your lemonade!";//output
    }
    else{
        cout<<"Sorry, you need more money.";//output
    }
    return 0;
}


  
