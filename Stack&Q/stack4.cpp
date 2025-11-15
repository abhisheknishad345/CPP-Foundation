
// matrix of stack using array

#include <iostream>
#include <stack>
#include <array>
using namespace std;

int main() {
    stack<array<array<int, 3>, 3>> st;  // 3x3 matrix

    st.push({{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    }});

    st.push({{
        {10,11,2},
        {13,14,5},
        {16,17,8}
    }});

    auto matrix = st.top(); // get the top matrix

    cout << "Top Matrix:\n";
    for (auto &row : matrix) {
        for (auto &x : row)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
