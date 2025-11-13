
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    // Create an array of strings
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    // string cars[5] = {"Hello"};

    // Loop through strings
    // for (int i = 0; i < 5; i++){
    //     cout << cars[i] << "\n";
    // }

    // for (int i = 0; i < 5; i++){
    //     cout << i << " = " << cars[i] << "\n";
    // }

    /************** For Each Loop ******************/
    // Loop through strings
    for (string car : cars)
    {
        cout << car << "\n";
    }




    return 0;
}