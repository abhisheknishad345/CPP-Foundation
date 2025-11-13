
#include<iostream>
#include<vector>
using namespace std;
/******** Dynamic size Array intro - Vector */
   
  
int main(int argc, char const *argv[]){
 
 // A vector with 3 elements
    vector<string> newCar = {"Volvo", "BMW", "Ford"};
    cout << "BEFORE\n";
    for (string car2 : newCar)
    {
        cout << car2 << "\n";
    }

    cout << "AFTER\n";
    // Adding another element to the vector
    newCar.push_back("Tesla");
    for (string car2 : newCar)
    {
        cout << car2 << "\n";
    }

return 0;
}