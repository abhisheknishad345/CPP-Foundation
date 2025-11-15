
/************** SET **************/
/**
 * A set stores unique elements where they:
# Are sorted automatically in ascending order.
# Are unique, meaning equal or duplicate values are ignored.
# Can be added or removed, but the value of an existing element cannot be changed.
# Cannot be accessed by index numbers, because the order is based on sorting and not indexing.
# o use a set, you have to include the <set> header file:
 */

#include <set>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    // Create a set called numbers that will store integers
    set<int> numbers = {1, -7, 3, 2, -5, 9};
    // set<int, greater<int>> numbers = {1, -7, 3, 2, -5, 9,1,3};
    cout <<"Size:" << numbers.size() <<endl;
    // cout << "Ascending order: ";
    //
    numbers.insert(11);
    numbers.insert(12);
    cout <<"Size:" << numbers.size() <<endl;
    // To remove specific elements from a set, you can use the .erase() function:
    // To remove all elements from a set, you can use the .clear() function:
    numbers.erase(1);
    cout <<"Size:" << numbers.size() <<endl;
    
    // Print set elements
    // cout << "Descending order: ";
    // cout << "Element:";
    cout << "Ascending order: ";
    for (int num : numbers)
    {
        if (num<3 || num<2)
        {
            /* code */
            cout << num << " ";
        }
        
    }
    cout <<endl;
    cout << "All clear" <<endl;
    numbers.clear();
    cout <<"Size:" << numbers.size() <<endl;
    
    return 0;
}