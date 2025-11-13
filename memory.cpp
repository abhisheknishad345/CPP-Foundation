
#include <iostream>
using namespace std;

int main()
{
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;
    string myString;

    //   cout << sizeof(myInt) << "\n";     // 4 bytes (typically)
    //   cout << sizeof(myFloat) << "\n";   // 4 bytes
    //   cout << sizeof(myDouble) << "\n";  // 8 bytes
    //   cout << sizeof(myChar) << "\n";    // 1 byte
    //   cout << sizeof(myString) << "\n";    // 24 byte

    int *ptr = new int;
    *ptr = 30;
    cout << *ptr;

    delete ptr;

    return 0;
}