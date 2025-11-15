#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    // push
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << endl;  // 30
    cout << "Size: " << st.size() << endl;        // 3

    // pop
     st.pop();   // removes 30

    cout << "Top after pop: " << st.top() << endl; // 20

    // empty
    if(st.empty())
        cout << "Stack is empty\n";
    else
        cout << "Stack is not empty\n";



        

    return 0;
}
