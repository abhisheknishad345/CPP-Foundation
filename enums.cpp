#include<iostream>
using namespace std;




enum Level {
  LOW,
  MEDIUM = 50,
  HIGH 
};
int main() {

  enum Level myVar = HIGH;
  cout << myVar;  // Now outputs 50
  return 0;
}