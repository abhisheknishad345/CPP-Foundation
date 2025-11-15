
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){

    try
    {
        throw 3.225;
    }
    catch (int e)
    {
        cout << "Integer error";
    }
    catch (double e)
    {
        cout << "Double error: " << e;
    }
    catch (...)
    {
        cout << "Unknown error";
    }

    return 0;
}