
/******
# A stack stores multiple elements in a specific order, called LIFO.

# LIFO stands for Last in, First Out. To vizualise LIFO, think of a pile of pancakes, where pancakes are both added and removed from the top. So when removing a pancake, it will always be the last one you added. This way of organizing elements is called LIFO in computer science and programming.
# Unlike vectors, elements in the stack are not accessed by index numbers. Since elements are added and removed from the top, you can only access the element at the top of the stack.
# To use a stack, you have to include the <stack> header file:
 */




#include <iostream>
#include <stack>
#include <string>
using namespace std;

void printStackPreservingOriginal(stack<string>& s) { // Pass by value to create a copy
    cout << "Stack elements (top to bottom):" << endl;
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
}


int main(int argc, char const *argv[])
{

    stack<string> device;
    // Add elements to the stack
    device.push("Volvo");
    device.push("BMW");
    device.push("Ford");
    device.push("Mazda");

    cout << device.size() <<endl;
    printStackPreservingOriginal(device);
    
    cout << device.size() <<endl;
    
    // cout << device.top() <<endl;
    // device.top() =  "Tesla";
    // cout << device.top() <<endl;
    // cout << device.size() <<endl;
    
    // printStackPreservingOriginal(device);

    return 0;
}