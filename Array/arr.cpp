
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Hello World !!" << endl;
    int arr[] = {2,4,5,6};
    int siz =  sizeof(arr)/sizeof(arr[0]);
    if (siz>3)
    {
        cout << "Size Exist" << endl;
    } else {
        cout << "size not exist" << endl;
    }

    vector<int> vec = {10,20,30};
    cout << vec.size()<< endl;
    if (vec.size()>3)
    {
       cout << "Size exist"<< endl;
       
    } else {

        cout << "Size not exist"<< endl;
    }
    
    
    
    
    return 0;
}
