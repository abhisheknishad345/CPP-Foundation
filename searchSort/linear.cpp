#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++){
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int main(){
    int arr[] = {4, 2, 7, 9, 1};
    int key = 1;
    int index = linearSearch(arr, 5, key);
    cout << "Element found at index: " << index;
}
