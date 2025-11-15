#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0)
        throw "Cannot divide by zero!";
    return a / b;
}

int main() {
    try {
        cout << divide(10, 0) << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    try {
        throw 10;   // throwing an integer error
    }
    catch (int e) {
        cout << "Error occurred: " << e;
    }

    return 0;
}
