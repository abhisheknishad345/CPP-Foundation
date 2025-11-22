#include<iostream>
#include<vector>

using namespace std;
   
  
int main(int argc, char const *argv[]){

    vector<int> ans(5, 0);
    for (int  i : ans)
    {
       cout << i << " ";
    }

    cout << endl;

    // next index = (i + 1) % n
    // previous index = (i - 1 + n) % n


    vector<int> arr = {10, 20, 30, 40};
    int n = arr.size();

    for (int i = 0; i < 2*n; i++) {        // loop more than n times
    int idx = i % n;                 // circular index
    cout << arr[idx] << " ";
}

cout << endl;
cout << 5%4;

    
 
 
return 0;
}