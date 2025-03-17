#include <iostream>
#include <deque>
using namespace std;

int main(){
    //creating an empty deque "d"
    deque<int> d;

    //insert at the back -> push_back()
    d.push_back(1);
    //insert at the front -> push_front()
    d.push_front(2);
    // Front -> 2  1 <- Back
    cout<<"Printing deque after inserting in front and back:"<<endl;
    for (int i : d) {
        cout << i << " ";
    }
    cout << endl;
    //pop_back() – Remove from the Back
    d.pop_back();
    cout<<"After using pop_back():"<<endl;
    for (int i : d) {
        cout << i << " ";
    }
    cout<<endl;
    //pop_front() – Remove from the Front
    d.pop_front();
    cout<<"After using pop_front():"<<endl;
    for (int i : d) {
        cout << i << " ";
    }

    d.push_back(3);
    d.push_front(4);

    cout << "Front: " << d.front() << endl; //1st element
    cout << "Back: " << d.back() << endl;   //last element
    cout << "Size: " << d.size() << endl;   // size of deque
    cout << "Empty? " << d.empty() << endl; //checks whether deque is empty or not

    d.erase(d.begin());  // Erase the first element
    cout << "After erase(): ";
    for (int i : d) cout << i << " ";
    cout << endl;
    return 0;
    
}