
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    // CREATE
    unordered_set<int> s = {10, 20, 30};

    s.insert(40);
    s.insert(20); // duplicate, will not insert

    // READ
    for (int x : s)
    {

        cout << x << " ";
    };

    cout << endl;
    // FOUND ELEMEMNT
    if (s.find(50) != s.end())
        cout << "50 Found\n";
    else
        cout << "50 Not Found\n";
    //  EXIST OR NOT
    if (s.count(30))
        cout << "30 exists\n";

    // UPDATE
    if (s.find(10) != s.end())
    {
        s.erase(10);
        s.insert(100);
    }

    for (int x : s)
    {

        cout << x << " ";
    };

    return 0;
}
