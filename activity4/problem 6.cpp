/*Problem 6: Switch problem 1 to 5
Combine all problems using switch statement

Sample Input:
What problem do you want to see? 1

Sample Output:
*Basic pricing Decision Runs*

Submit a cpp file, a link to your github repository, or a notion page.
========================================================================================*/

/*
it works perfectly fine, but  theres 20%  bug where the loop errors and it becomes a for loop c;
sometimes the while output bugs also don't know why. but 100% it works    */


#include <iostream>
using namespace std;
int main()
{
   char again, choice;
    int  z = 0, x = 0;// variable
   do{// whole program loop
   std::cout << "-----Switch Problem-----" << endl;// using std because system can't proccess due to the amount of declarations
    std::cout << "Enter 1 to run Basic Pricing Decision" << endl;
   std::cout << "Enter 2 to run  Weather-Based Discounts" << endl;
    std::cout << "Enter 3 to run Inventory Check" << endl;
    std::cout << "Enter 4 to run Bulk Purchase Discount" << endl;
    std::cout << "Enter 5 to run  Player Movement" << endl;
   std:: cout << "------------------------" << endl;
    std::cout << "Enter Choice: ";
    std::cin >> choice;
   switch(choice){
   // each case has their own loops using do and while
    case '1':{
      
  char cash;// variable
  char move1;// same variable as case 5 but still worked? 
  do{// start loop of case 1
    std::cout<< "how much money do you have? ";
    std::cin>> cash;
    if (cash >= 1){//greater or less than condition
        std::cout<<"Enjoy your lemonade!"<<endl;//output
    }
    else{
        std::cout<<"Sorry, you need more money."<<endl;//output
    }
    std::cout<<"Do you want to start again (y/n)? ";//output command forloop
         std:: cin>> move1;
         }//end loop
          while ( move1 == 'y' || move1 == 'Y' );// declaration of loop 
    break;// this where the case ends
  }
    case '2':{
      int temperature;
      char move2;
      do{
      std::cout<<"enter temperature: ";//input
      std::cin>> temperature;
      if (temperature >= 30){//condition of greater than or equal 30
       std::cout<<"It's hot! Lemonade costs $0.80 today."<<endl;//output
      }
      else{
       std:: cout<<"$1.00"<<endl;//output
      }
      std::cout<<"Do you want to start again (y/n)? ";
         std:: cin>> move2;
         }
          while ( move2 == 'y' || move2 == 'Y' );
      break;
  }
    case '3':{
       int lemon, sugar ;
       char move3;
       do{
       std::cout<<"how many lemons?: ";//input
       std::cin>> lemon;
      std::cout<<"how many sugar?: ";//input
       std::cin>> sugar;
       if (lemon <= 0 || sugar <= 0){//condition of if lemon is less than or equal 0 or sugar is less than or equal 0
         std::cout<<"you can't make lemonade!"<<endl;//output
       }
       else{
          std::cout<<"You're ready to sell lemonade!"<<endl;//output
       }
        std::cout<<"Do you want to start again (y/n)? ";//used to have endl incase for bugs, but realized it's absolutely botched with teh endl
          std::cin>> move3;
         }
          while ( move3 == 'y' || move3 == 'Y' );
      break;
  }
   case '4':{
      float cups, product, result;// variables
      char move4;
      do{
      std::cout<<"how many cups? ";// input
      std::cin>> cups;
   
      if( cups >= 1 && cups <= 4 ){
        std::cout << cups << "$"<<endl;
      }
      else if ( cups >= 5 && cups <= 9 ){ 
          product = cups * 0.10;
          result = cups - product;
          std::cout<< result << "$"<<endl;
        }
      else{ 
          (cups >= 10 );
          product = cups * 0.20;
          result = cups - product;
          std::cout<< result << "$"<<endl;
         }
         std::cout<<"Do you want to start again (y/n)? ";
         std:: cin>> move4;
         }
          while ( move4 == 'y' || move4 == 'Y' );
      break;
      }
    
    
   case '5':{
    
    char move, move1 ;// used different moves to avoid error but somehow it still works lol
    do{
    std::cout<<"-----Player movement-----"<<endl;
    std::cout<<"Enter command: ";
    std::cin>> move;
    switch (move){
     case 'w':
     case 'W':
     x += 1;
     break;
     
     case 'a':
     case 'A':
     z -= 1;
     break;
     
     case 's':
     case 'S':
     z -= 1;
     break;

     case 'd':
     case 'D':
     x += 1;
     break;
    }
    std::cout << " the location of the player is " << z <<"," << x <<endl;
   std::cout <<" do you want to chooose agian? (y/n): ";
    std::cin >> move;
  }
       while (move == 'y'|| move == 'Y');  
       break;
    }
    
    default:
    std::cout<< "that won't work lil bro"<<endl;// output when loop isn't satisfied in the first
   }
    
   
    std::cout<<"do you want to run the program agian? (y/n) ";//output command for declaration
    std::cin>> again;
  }// close bracket for the whole system loop
  
    while (again == 'y' || again == 'Y');//declaration of loop
        int size;
        size = 20;

    // Top semi-circular parts of the heart
    for (int a = size / 2; a <= size; a += 2) {
        // Print leading spaces
        for (int b = 1; b < size - a; b += 2) {
            std::cout << " ";
        }
        // Print left semi-circle
        for (int b = 1; b <= a; b++) {
            std::cout << "*";
        }
        // Print spaces between semi-circles
        for (int b = 1; b <= size - a; b++) {
            std::cout << " ";
        }
        // Print right semi-circle
        for (int b = 1; b <= a - 1; b++) {
            std::cout << "*";
        }
        std::cout << std::endl; // Move to the next line
    }

    // Base of the heart (inverted triangle)
    for (int a = size; a >= 0; a--) {
        // Print leading spaces for the inverted triangle
        for (int b = a; b < size; b++) {
            std::cout << " ";
        }
        // Print the base of the triangle
        for (int b = 1; b <= (a * 2) - 1; b++) {
            std::cout << "*";
        }
        std::cout << std::endl; // Move to the next line
    }
      std::cout<< "thank you for trying our program"<<endl;//output when declaration isn't satisfied
  
  
  
        return 0;
}
