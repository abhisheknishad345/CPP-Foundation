
/***
 # A deque (stands for double-ended queue) however, is more flexible, as elements can be added and removed from both ends (at the front and the back). You can also access elements by index numbers.

# To use a deque, you have to include the <deque> header file:
 */

#include <deque>
#include<iostream>
using namespace std;
   
  
int main(int argc, char const *argv[]){

    deque<int> num;
    num.push_front(5);
    num.push_front(6);
    num.push_front(7);
    num.push_front(8);

    /**
     * The .at() function is often preferred over square brackets [] because it throws an error message if the element is out of range:
     */
    cout << num.at(0) << endl;
    cout <<"Front:" << num.front() << endl;
    cout <<"Back:"<< num.back() << endl;
    
    num.push_back(9);
    num.push_back(10);
    
    for (int i : num)
    {
        cout << i <<" ";
    }
    cout << endl;
    cout <<"Back:"<< num.back() << endl;
    // num.pop_front() ;
    // num.pop_back() ;
    cout <<"Size before:"<< num.size()<<endl;
    cout << "Pop out elements:";
    
    while (!num.empty()) {
        int popped_value = num.front(); // Get the element at the front
        cout << popped_value << " ";   // Print the element
        num.pop_front();                // Remove the element from the front
    }
    cout << endl;
    cout <<"Size after:"<< num.size()<<endl;
    
return 0;
}