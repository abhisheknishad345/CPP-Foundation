#include <iostream>
using namespace std;

class MyError
{
public:
    string message;
    MyError(string msg) : message(msg) {}
};

int main()
{

    // try {
    //     throw MyError("Object-based exception");
    // }
    // catch (MyError e) {
    //     cout << e.message;
    // }

    // Nested try catch
    try
    {
        try
        {
            throw "Inner error";
        }
        catch (int x)
        {
            cout << "Inner catch";
        }
    }
    catch (const char *msg)
    {
        cout << "Outer caught: " << msg;
    }

    return 0;
}