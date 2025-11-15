
#include <iostream>
#include <stack>
using namespace std;

// implement Queue using stack
class MyQueue {
// private:

public:

stack<int> s1, s2;

    // INSERT INTO QUEUE
    void push(int x) {
        s1.push(x);
    }

    // REMOVE FROM QUEUE (pop)
    int pop() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int val = s2.top();
        s2.pop();
        return val;
    }

    // GET FRONT ELEMENT
    int peek() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    // CHECK IF EMPTY
    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    MyQueue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.pop() << endl;   // 10
    cout << q.peek() << endl;  // 20
    cout << q.pop() << endl;   // 20
    cout << q.peek() << endl;  // 30
    cout << q.empty() << endl; // false

    return 0;
}
