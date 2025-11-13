
/******
# A queue stores multiple elements in a specific order, called FIFO.

# FIFO stands for First in, First Out. To visualize FIFO, think of a queue as people standing in line in a supermarket. The first person to stand in line is also the first who can pay and leave the supermarket. 
# This way of organizing elements is called FIFO in computer science and programming.

# Unlike vectors, elements in the queue are not accessed by index numbers. Since queue elements are added at the end and removed from the front, you can only access an element at the front or the back.

# To use a queue, you have to include the <queue> header file:
 */






#include <iostream>
#include <queue>
#include <string>
using namespace std;

void printStackPreservingOriginal(queue<string> s) { // Pass by value to create a copy
    cout << "Queue elements (front to back):" << endl;

    while (!s.empty()) {
        string popElemenet = s.front();
        cout << popElemenet << " :Popped ";
        s.pop();
    }
}


int main(int argc, char const *argv[])
{

    queue<string> device;
    // Add elements to the stack
    device.push("Volvo");
    device.push("BMW");
    device.push("Ford");
    device.push("Mazda");

    // cout << device[0]; 
    /**
     * You cannot access queue elements by referring to index numbers, like you would with arrays and    vectors.
        In a queue, you can only access the element at the front or the back, using .front() and .back() respectively:
     */
    
    cout << device.front() <<endl;
    cout << device.back() <<endl;
    cout << device.size() <<endl;
    //  device.pop() ;

    cout << device.size() <<endl;
    printStackPreservingOriginal(device);
    cout << endl;
    
    cout << device.size() <<endl;
    
    // cout << device.top() <<endl;
    // device.top() =  "Tesla";
    // cout << device.top() <<endl;
    // cout << device.size() <<endl;
    
    // printStackPreservingOriginal(device);

    return 0;
}