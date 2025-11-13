
#include<iostream>
using namespace std;
   
  
int main(int argc, char const *argv[]){
 

try {
  int age;
  cout <<"Enter age:";
  cin>>age;
  if (age >= 18) {
    cout << "Access granted - you are old enough.";
  } else {
    throw (age);
  }
}
catch (int myNum) {
  cout << "Access denied - You must be at least 18 years old.\n";
  cout << "Age is: " << myNum;
}

return 0;
}