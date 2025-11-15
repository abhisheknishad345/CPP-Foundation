
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> mp;

    // INSERT elements
    mp[101] = "Abhishek";
    mp[102] = "Rohan";
    mp[103] = "Sita";

    // ANOTHER way to insert
    mp.insert({14, "Meera"});

    // ACCESS elements
    cout << mp[101] << endl;     // Abhishek
    cout << mp.at(102) << endl;  // Rohan
    cout <<"Name at Roll no 14: " << mp.at(14) <<endl;

    if (mp.find(1) != mp.end())
    cout << "Found";
    else cout << "Not Found" <<endl;



    // ITERATE
    cout << "\nAll elements:\n";
    for (auto p : mp) {
        cout << p.first << ": " << p.second << endl;
    }

    return 0;
}
