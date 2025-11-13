
/**
#  A vector in C++ is like a resizable array.
#  Both vectors and arrays are data structures used to store multiple elements of the   same data type.
# The difference between an array and a vector, is that the size of an array cannot be modified (you cannot add or remove elements from an array).
# A vector however, can grow or shrink in size as needed.
# To use a vector, you have to include the <vector> header file:
 */

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{

    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars.at(4);
    cout << "\n";
    cout << cars.size();
    cout << "\n";

    // Get the first element
    cout << cars.front();
    cout << "\n";

    // Get the last element
    cout << cars.back();
    cout << "\n";

    // Print vector elements
    for (string car : cars)
    {
        cout << car << "\n";
    }

    /**
     * There is also a function to find out whether a vector is empty or not.
        The .empty() function returns 1 (true) if the vector is empty and 0 (false) if it contains one or more elements:
     */

    return 0;
}