
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    cout << "===== 1. BASIC VECTOR OPERATIONS =====\n";

    vector<int> v;

    // push_back / emplace_back
    v.push_back(10);
    v.push_back(20);
    v.emplace_back(30);   // faster

    cout << "\nVector v elements: ";
    for(int x : v) cout << x << " ";

    // size, capacity
    cout << "\nSize: " << v.size();
    cout << "\nCapacity: " << v.capacity();

    // front, back
    cout << "\nFront: " << v.front();
    cout << "\nBack: " << v.back();

    // insert
    v.insert(v.begin() + 1, 15);  
    cout << "\n\nAfter insert at index 1: ";
    for(int x : v) cout << x << " ";

    // erase single
    v.erase(v.begin() + 2);
    cout << "\nAfter erase index 2: ";
    for(int x : v) cout << x << " ";

    // erase range
    v.erase(v.begin(), v.begin() + 2);
    cout << "\nAfter erase range [0,2): ";
    for(int x : v) cout << x << " ";

    // resize
    v.resize(5, 100); 
    cout << "\nAfter resize to 5 (fill with 100): ";
    for(int x : v) cout << x << " ";

    // shrink_to_fit
    v.shrink_to_fit();


    cout << "\n\n===== 2. ITERATORS =====\n";

    cout << "\nForward iterator: ";
    for(auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

    cout << "\nReverse iterator: ";
    for(auto it = v.rbegin(); it != v.rend(); it++)
        cout << *it << " ";


    cout << "\n\n===== 3. ASSIGN, SWAP, CLEAR =====\n";

    vector<int> a, b;

    a.assign(3, 9);    // {9,9,9}
    b.assign(4, 4);    // {4,4,4,4}

    cout << "\nVector a: ";
    for(int x : a) cout << x << " ";

    cout << "\nVector b: ";
    for(int x : b) cout << x << " ";

    a.swap(b);

    cout << "\nAfter swap:\na: ";
    for(int x : a) cout << x << " ";
    cout << "\nb: ";
    for(int x : b) cout << x << " ";

    // clear
    a.clear();
    cout << "\nAfter clear(), a is empty? " << a.empty();


    cout << "\n\n===== 4. VECTOR OF PAIRS =====\n";

    vector<pair<int,string>> vp;

    vp.emplace_back(1, "One");
    vp.emplace_back(2, "Two");
    vp.emplace_back(3, "Three");

    for(auto &p : vp) {
        cout << p.first << " - " << p.second << endl;
    }


    cout << "\n===== 5. 2D VECTOR =====\n";

    vector<vector<int>> matrix(3, vector<int>(4, 0)); // 3x4 initialized to 0

    int cnt = 1;
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
            matrix[i][j] = cnt++;
        }
    }

    cout << "Matrix:\n";
    for(auto &row : matrix){
        for(auto col : row){
            cout << col << " ";
        }
        cout << endl;
    }


    cout << "\n===== 6. 3D VECTOR =====\n";

    vector<vector<vector<int>>> cube(2, vector<vector<int>>(3, vector<int>(3, 1)));

    for(int i=0; i<cube.size(); i++){
        cout << "Layer " << i+1 << ":\n";
        for(int j=0; j<cube[i].size(); j++){
            for(int k=0; k<cube[i][j].size(); k++){
                cout << cube[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    cout << "\n===== PROGRAM END =====\n";
    return 0;
}
