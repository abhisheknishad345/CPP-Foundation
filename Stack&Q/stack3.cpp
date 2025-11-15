
// array inside stack

 
#include <iostream>
#include <stack>
#include <array>
using namespace std;

int main() {
    stack<array<int,3>> st;
    
    st.push({1,2,3});
    st.push({4,5,6});
    
    auto topArr = st.top();
    // cout << topArr[0] << " " << topArr[1] << " " << topArr[2] << endl;
    cout << topArr[0] << " " << topArr[1] << " "<< endl;
    
    return 0;
}