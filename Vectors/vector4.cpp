#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> grid = {
        {1, 2, 3},
        {2, 8, 4},
        {4, 5, 6}
    };

    int rows = grid.size();        // 2
    int cols = grid[2].size();     // 3

    cout << "Rows = " << rows << endl;
    cout << "Columns = " << cols << endl;
    cout << "Element at (2,1) = " << grid[2][1] << endl; // 5

    return 0;
}
