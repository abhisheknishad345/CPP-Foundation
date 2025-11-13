#include <iostream>
using namespace std;

void changeValue(int &num)
{
    num = 50;
}

struct Car
{
    string brand;
    int year;
};

void myFunction(Car c)
{
    cout << "Brand: " << c.brand << ", Year: " << c.year << "\n";
}

void updateYear(Car &c)
{
    c.year++;
}

int main()
{
    int value = 10;
    changeValue(value); // Call the function and change the value to 50
    cout << value;
    cout << endl;

    /************ Pass structure to a function */

    Car myCar = {"Toyota", 2020};
    myFunction(myCar);

    updateYear(myCar);
    cout << "The " << myCar.brand << " is now from year " << myCar.year << ".\n";

    return 0;
}