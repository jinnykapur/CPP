#include <iostream>
#include <array>

using namespace std;

int main(){
    int arr[3]={1,2,3}; //tradtional array
    array<int,4> a={1,2,3,4}; //STL array
    int Tsize = sizeof(arr)/sizeof(arr[0]); 
    // sizeof(arr): total size of the array in bytes.
    // sizeof(arr[0]): size of one element in bytes.

    int Ssize = a.size(); //getting size of STLarray

    cout<<"The size of the traditional array is:"<<Ssize<<endl;
    cout<<endl;
    cout<<"The size of the STL array is:"<<Ssize<<endl;
    cout<<endl;
    cout<<"Printing the elements of the traditional array:"<<endl;
    //printing elements of traditional array
    for(int i=0; i<Tsize;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Printing the elements of the STL array:"<<endl;
    //printing elements of STL array
    for(int i=0; i<Ssize;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    
    // Accessing elements and properties
    cout << "Element at 2nd Index-> " << a.at(2) << endl;
    cout<<endl;
    cout << "Empty or not-> " << a.empty() << endl;
    cout<<endl;
    cout << "First Element-> " << a.front() << endl;
    cout<<endl;
    cout << "Last Element-> " << a.back() << endl;
    cout<<endl;
    

    // Accessing out of bounds - Dangerous (no error, undefined behavior)
    cout << "Accessing arr[5] (out of bounds, traditional array): ";
    cout << arr[5] << endl; // Undefined behavior, may print garbage
    cout<<endl;
    cout << "Accessing a[5] (out of bounds, STL array): ";
    cout << a[5] << endl; // Undefined behavior, may print garbage
    cout<<endl;


    return 0;



}