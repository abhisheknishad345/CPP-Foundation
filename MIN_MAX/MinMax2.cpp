
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {5, -2, 10, 8, -9, 2012354};
    int n = 6;

    int mn = INT_MAX;
    int mx = INT_MIN;

    for (int i = 0; i < n; i++) {
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }

    cout << "Minimum value = " << mn << endl;
    cout << "Maximum value = " << mx << endl;


    int x = INT_MAX;

    cout << "Before overflow: " << x << endl;
    x = x + 1;   // OVERFLOW!

    cout << "After overflow: " << x << endl; // wraps around

    return 0;
}
