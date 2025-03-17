#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v; //declaring and initialising a vector
    // v : an empty vector of type integer.
    // syntax : vector<data_type> vector_name
    cout<<"Capacity of vector v:"<<v.capacity()<<endl; // capacity(): returns size of vector 
    // prints 0 (zero) because it's an empty vector for now.
    cout<<"Size of vector v:"<<v.size()<<endl;
    
    // Inserting elements using push_back()
    cout<<endl;
    cout<<"Capacity often grows exponentially as elements are added:\n"
          "Push 1 element ->Capacity: 1\n"
          "Push 2nd element -> Capacity: 2\n"
          "Push 3rd element -> Capacity: 4\n"
          "Push more ->Capacity: 8, 16, ..."<< endl;

    v.push_back(1);
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity-> " << v.capacity() << endl;

    cout << "Size-> " << v.size() << endl;

    // Accessing element at a specific index
    cout << "Element at 2nd Index " << v.at(2) << endl;

    // Getting first and last element
    cout << "Front " << v.front() << endl;
    cout << "Back " << v.back() << endl;

    // Displaying the vector elements before pop
    cout << "Before Pop" << endl;
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    // Removing last element
    v.pop_back();

    cout << "After Pop" << endl;
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    // Clearing the vector
    cout << "Before Clear, Size " << v.size() << endl;
    v.clear();
    cout << "After Clear, Size " << v.size() << endl;

    // Creating a vector of size 5, initialized with 1
    vector<int> a(5,1);
    //vector a with size 5 and each element is initialised to 1
    // a -> [1,1,1,1,1]
    cout<<"Capacity of vector a:"<<a.capacity()<<endl;
    // prints 5
    cout<<"Size of vector a:"<<a.size()<<endl;

    cout << "Vector a: ";
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;

    // Copying vector a into last
    vector<int> last(a);
    cout << "Vector last (copy of a): ";
    for (int i : last) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}
