#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{

    string hello = "Hi Abhishek";
    // cout << hello << endl;
    int a = hello.length();

    string txt = "We are the so-called \"Vikings\" from the north\n";
    // cout << txt;

    string food = "Pizza"; // food variable
    string &meal = food;   // reference to food
    string *ptr = &food;

    meal = "Burger"; // changes both meal and food

    // cout << food << "\n"; // Outputs Burger
    // cout << meal << "\n"; // Outputs Burger
    // cout << ptr << "\n";
    // cout << *ptr << "\n"; // dereferencing

    // Change the value of the pointer
    *ptr = "Hamburger";

    // Output the new value of the pointer (Hamburger)
    cout << *ptr << "\n";

    // Output the new value of the food variable (Hamburger)
    cout << food << "\n";

    return 0;
}