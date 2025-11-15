#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

bool isValid(string s)
{

    stack<char> st;

    unordered_map<char, char> map = {
        {')', '('},
       {']', '['},
       { '}', '{'}
    };

        for (char ch : s) {
        if (map.count(ch)) {
            if (st.empty() || st.top() != map[ch])
                return false;
            st.pop();
        } else {
            st.push(ch);
        }
    }

    return st.empty();
}

int main(int argc, char const *argv[])
{

    int i = 2;
    do
    {
        cout << i << "\n";
        i++;
    } while (i < 5);

    cout << "True get 1 and False get 0: ";

    cout << isValid("[{}][")<< endl;
    cout << isValid("[{}]") << endl ;
    cout << isValid("{}[]()") << endl ;


    return 0;
}
