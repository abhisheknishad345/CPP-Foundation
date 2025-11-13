#include<iostream>
using namespace std;
   
  
int main(int argc, char const *argv[]){
 
 
    /*************************  Named structure ***********************/
// Declare a structure named "car"
struct car {
  string brand;
  string model;
  int year;
};

  // Create a car structure and store it in myCar1;
  car myCar1;
  myCar1.brand = "BMW";
  myCar1.model = "X6";
  myCar1.year = 1998;

  // Create another car structure and store it in myCar2;
  car myCar2;
  myCar2.brand = "Ford";
  myCar2.model = "Kali";
  myCar2.year = 1975;
 
  // Print the structure members
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
 
return 0;
}