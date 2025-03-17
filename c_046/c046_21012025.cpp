#include <iostream>

using namespace std;

int main() {

    int n;
    cout<<"Enter no. of elements in array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int myOutput=0;
    for(int i=0;i<n;i++){
        myOutput+=arr[i];
    }

    cout<<myOutput;
    return 0;

}
