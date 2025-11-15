
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{

    vector<int> v;
    
    vector<int> vr;
    cout << "Capacity before reserve: " << v.capacity() << endl;
    vr.reserve(100);
    cout << "Capacity after reserve: " << vr.capacity() << endl;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    // Capacity increses by double
    cout << "Capacity:" << v.capacity() << endl; // capacity may be 2 or more

    vector<int> v1 = {5, 6, 7, 8};
    cout << "Size:" << v1.size() << endl; // Output: 4

    vector<int> v2 = {99, 2, 3,10,20};

    // auto it = v2.begin();   
    auto it = v2.rbegin();   
    cout << *it << endl;

    v2.reserve(4);

    // v2.resize(5);
    v2.push_back(5);
    v2.push_back(6);

     
    for (int i : v2)
    {
        cout << i << " ";
    }
    

    return 0;
}