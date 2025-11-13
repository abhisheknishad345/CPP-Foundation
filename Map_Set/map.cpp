/********* MAP ****************/
/***
 * A map stores elements in "key/value" pairs.
 *
# Elements in a map are:
# Accessible by keys (not index), and each key is unique.
# Automatically sorted in ascending order by their keys.
## To use a map, you have to include the <map> header file:
 */

/******
 # To create a map, use the map keyword, and specify the type of both the key and the value it should store within angle brackets <>. At last, specify the name of the map, like: map<keytype, valuetype> mapName:
 */

#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    map<string, int, greater<string>> people = {
        {"John", 32},
        {"Adele", 45},
        {"Bo", 29}};
    // you can access a map element by referring to its key inside square brackets []:
    // The .at() function is often preferred over square brackets [] because it throws an error message if the element does not exist:

    // cout << "John is: " << people["John"] << "\n";
    people["John"] = 50;
    // cout << "John is: " << people.at("John") << "\n";
    // cout << "Bo is: " << people.at("Bo") << "\n";
    cout << "Size Before:" << people.size() << endl;
    cout << "Details Before" << endl;
    for (auto person : people)
    {
        cout << person.first << " is: " << person.second << "\n";
    }
    cout << endl;

    /********* Insert element */
    people["Jenny"] = 22;
    people["Liam"] = 24;
    people["Kasper"] = 20;
    people["Anja"] = 30;

    people.insert({"Jenny", 22});
    people.insert({"Liam", 24});
    people.insert({"Kasper", 20});
    people.insert({"Anja", 30});

    people.erase("Liam");

    cout << "Details After Update" << endl;
    for (auto person : people)
    {
        cout << person.first << " is: " << person.second << "\n";
    }

    cout << endl;

    /**************** Iterator ************/
    cout << "ITERATORS" << endl;
    for (auto it = people.begin(); it != people.end(); ++it)
    {
        cout << it->first << " is: " << it->second << "\n";
    }

    // To remove specific elements from a map, you can use the .erase() function:
    // To remove all elements from a map, you can use the .clear() function:

    cout << "Size After:" << people.size() << endl;
    people.clear();
    cout << "Size After Clear: ";
    cout << people.empty();

    return 0;
}