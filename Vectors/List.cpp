
/*******
 * A list is similar to a vector in that it can store multiple elements of the same type and dynamically grow in size.

# However, two major differences between lists and vectors are:
# You can add and remove elements from both the beginning and at the end of a list, while vectors are generally optimized for adding and removing at the end.
# Unlike vectors, a list does not support random access, meaning you cannot directly jump to a specific index, or access elements by index numbers.
# To use a list, you have to include the <list> header file:
 */

#include <list>
#include<iostream>
using namespace std;
   
  
int main(int argc, char const *argv[]){

    list<int> age = {10,20,55,63,45,98,996};
    cout << age.size() << endl;
    age.push_front(91);
    for (int i : age)
    {
       cout << i << " ";
    }
    cout << endl;
    
    cout << age.front() << endl;
    cout << age.back() << endl;
    cout << age.size() ; cout << endl;
    cout << age.empty() << endl;
 
 
return 0;
}