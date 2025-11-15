#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<pair<int, string>> st;

    st.push({1, "One"});
    st.push({2, "Two"});
    st.push({3, "Three"});

    cout << "Top element pair: ";
    cout << st.top().first << " - " << st.top().second;
    cout << endl;

    /************* Pair of Stack ***********/
    stack<pair<int,int>> points;

    points.push({3,5});
    points.push({10,20});
    points.push({7,8});

    while(!points.empty()) {
        auto p = points.top();
        cout << "X: " << p.first << ", Y: " << p.second << endl;
        points.pop();
    }

    return 0;
}
