#include<iostream>
using namespace std;

int sum(int n, int m){

    return n*m;

}
   
  
int main(int argc, char const *argv[]){

    cout << "Hello C++" << endl;
// auto keyword 
    auto x= 10;
    x= 15; // updated
    x= 51.2; // cannot convert int to float
    cout << x << endl;
   int a=  sum(10,35);
   cout <<a << endl;

    cout << "Done!!"; 
 
 
return 0;
}