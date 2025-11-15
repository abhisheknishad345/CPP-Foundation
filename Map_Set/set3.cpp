
#include <iostream>
#include <unordered_set>
#include <climits>
using namespace std;

int main() {
    unordered_set<int> us = {10, 5, 20, 3, 15, 25};

    int mx = INT_MIN;
    for (int x : us) {
        mx = max(mx, x);
    }

    cout << "Maximum in unordered_set = " << mx << endl;
}
