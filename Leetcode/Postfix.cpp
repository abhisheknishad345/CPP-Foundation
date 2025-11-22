
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

bool isNumber(const string &s) {
    for (char c : s) {
        if (!isdigit(c)) return false;
    }
    return true;
}

int evaluatePostfix(vector<string>& tokens) {
    stack<int> st;

    for (string token : tokens) {

        if (isNumber(token)) {
            st.push(stoi(token));      // Convert numeric string → int

        } else {
            // token is an operator
             int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            int result = 0;

            if (token == "+") result = a + b;
            else if (token == "-") result = a - b;
            else if (token == "*") result = a * b;
            else if (token == "/") result = a / b;  // integer division

            st.push(result);
        }
    }

    return st.top();  // final answer
}

int main() {
    vector<string> arr = {"2", "1", "+", "5", "*"};

    cout << evaluatePostfix(arr) << endl;  // Output: 9
    return 0;
}
