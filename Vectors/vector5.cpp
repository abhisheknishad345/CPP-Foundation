
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a = {5, 1, 9, 3};
    vector<int> b = {8, 2, 7, 4,10};

    // Step 1: Sort both lists

    sort(a.begin(), a.end());
    cout << "Sorted a is:";
   for (int i : a)
   {
    cout  << i <<" ";
   }

   cout << endl ;
   
    sort(b.begin(), b.end());

    // Step 2: Create a result vector with enough size
    vector<int> result(a.size() + b.size());

    // Step 3: Merge sorted lists
    merge(a.begin(), a.end(), b.begin(), b.end(), result.begin());

    cout << "Merged Sorted List: ";
    for(int x : result)
        cout << x << " ";

    return 0;
}
