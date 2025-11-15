
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s = {5, 2, -9, 1, 7};

    // int minimum = *s.end(); // first element is smallest
    // cout << "Minimum = " << minimum;

    if (!s.empty())
    {
        int minimum = *s.rbegin();
        int maximum = *s.begin();
        cout <<"Minimum is: " << minimum << endl;
        cout <<"Maximum is: " << maximum;
    }
    else
    {
        cout << "Set is empty";
    }

    return 0;
}
