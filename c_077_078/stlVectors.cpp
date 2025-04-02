#include <iostream>
#include <vector>
using namespace std;

int main(){
    //declaration of vector
    vector<int> vect;
    vect={1,2,3,4};
    //insert element to vector 
    vect.push_back(5);
    vect.push_back(6);
    vect.push_back(7);
    vect.push_back(8);
    vect.push_back(9);
    vect.pop_back(); //removes 9 (from the end of vector)
    for (int i:vect){
        cout<<i<<" ";
    }
    cout<<endl;
    
    //to know the size of vector
    cout<<"Size of vector: "<<vect.size()<<endl;
    //capacity
    cout<<"Capacity of vector: "<<vect.capacity()<<endl;

    cout<<"Value at index 3: "<<vect[3]<<endl;
    cout<<"Value at index 3: "<<vect.at(3)<<endl;

    cout<<"Front element: "<<vect.front()<<endl;
    cout<<"Back element: "<<vect.back()<<endl;

    //to access 1st element by using begin()
    vect.erase(vect.begin());
    for (int i:vect){
        cout<<i<<" ";
    }
    cout<<endl;
    vect.erase(vect.begin()+2);
    for (int i:vect){
        cout<<i<<" ";
    }
    cout<<endl;
    vect.erase(vect.begin()+1,vect.begin()+4);
    for (int i:vect){
        cout<<i<<" ";
    }
    cout<<endl;

    //insertion
    vect.insert(vect.begin()+1,6);
    
    for (int i:vect){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<*vect.begin()<<endl; //pointer stores address; * -> helps to access the value of pointer
    cout<<*vect.end()<<endl;
    // vector<int> vect2(5,6);
    
    // for (int i:vect2){
    //     cout<<i<<" ";
    // } // 6 6 6 6 6





    

}