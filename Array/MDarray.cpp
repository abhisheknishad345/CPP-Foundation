
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}};

    cout << letters[0][2]; // Outputs "C"
    cout << "\n";

    /*********** Loop in MD Array */

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << letters[i][j] << "\n";
        }
    }
    return 0;
}