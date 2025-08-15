
#include <iostream>
using namespace std;

int main() {
   
   int gallons_used, starting_mileage, ending_mileage, distance_drive, average_miles_per_gallon;
       
   cout<<"Enter gallons used: ";
   cin>> gallons_used;//Get values for gallons_used
   
   cout<<"Enter starting milage";
   cin>> starting_mileage;//Get values for values for starting_milage
   
   cout<<"Enter ending milage: ";
   cin>> ending_mileage;//Get values for ending values_milage
   
   distance_drive = ending_mileage - starting_mileage;// set the value of average miles per gallon to distancen driven per gallon
   
   average_miles_per_gallon = distance_drive / gallons_used;
 cout<<"The average miles per gallon is "<< average_miles_per_gallon <<endl; // print the value of average miles per gallon
 if(average_miles_per_gallon > 25){ //if average per gallon is greater tha 25.0 then 
     cout <<" You are getting good mileage";// print message you are getting good gas mileage
 }
 else {
     cout<<"you are NOT getting good gas milage";//print message you are not getting gas mileage
 }
 return 0;
 
}
