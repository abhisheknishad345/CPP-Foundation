
#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> left, vector<int> right);

vector<int> sortArray(vector<int> &arr)
{
    if (arr.size() <= 1)
    {
        return arr;
    }

    int mid = arr.size() / 2;

    vector<int> left;
    vector<int> right;

    for (int i = 0; i < mid; i++)
    {
        left.push_back(arr[i]);
    }

    for (int j = mid; j < arr.size(); j++)
    {
        right.push_back(arr[j]);
    }

    left = sortArray(left);
    right = sortArray(right);

    return merge(left, right);
}

vector<int> merge(vector<int> left, vector<int> right)
{
    vector<int> res;
    int i = 0;
    int j = 0;

    while (i < left.size() && j < right.size())
    {
        if (left[i] < right[j])
        {
            res.push_back(left[i]);
            i++;
        }
        else
        {
            res.push_back(right[j]);
            j++;
        }
    }

    while (i < left.size())
    {
        res.push_back(left[i]); // push remaining elements of left vector
        i++;
    }
    while (j < right.size())
    {
        res.push_back(right[j]); // push remaining elements of right vector
        j++;
    }

    return res;
}

int main()
{
    cout << "Hello World !!" << endl;
    vector<int> arr = {5, 2, 7, 3, 9, 1, 10};

    vector<int> sortedArr = sortArray(arr); // store returned sorted vector

    // printing sorted array
    cout << "Sorted Array: ";
    for(int num : sortedArr){
        cout << num << " ";
    }

    cout << endl;

    return 0;
}