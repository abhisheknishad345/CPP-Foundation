#include<iostream>
using namespace std;
   
  
int main(int argc, char const *argv[]){

    cout << "Hello C++" << endl;
// auto keyword 
    auto x= 10;
    x= 15; // updated
    x= 51.2; // cannot convert int to float
    cout << x;
 
 
return 0;
}