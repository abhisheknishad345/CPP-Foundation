#include <iostream>
#include <functional>
using namespace std;

void myFunction(function<void()> func)
{
    func();
    func();
}

int main(int argc, char const *argv[])
{

    auto message = []()
    {
        cout << "Hello World!\n";
    };

    message();

    auto add = [](int a, int b)
    {
        return a + b;
    };

    cout << add(3, 4);
    cout << endl;
    myFunction(message);
    /******************** Capture by Reference */
    int x = 10;

    auto show = [&x]()
    {
        cout << x;
    };

    x = 20; // Change x after the lambda is created

    show();

    return 0;
}
