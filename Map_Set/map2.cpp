// find min and max in Map 

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;

    mp[10] = "Ten";
    mp[3]  = "Three";
    mp[25] = "Twenty Five";
    mp[7]  = "Seven";

    // Map is automatically sorted by keys: {3, 7, 10, 25}

    int minKey = mp.begin()->first;        // smallest key
    string maxKey = mp.rbegin()->second;       // largest key  (or (--mp.end())->first)

    cout << "Minimum Key = " << minKey << endl;
    cout << "Maximum Key = " << maxKey << endl;

    return 0;
}
