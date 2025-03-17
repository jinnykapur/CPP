#include <iostream>
#include <array>
using namespace std;

int main(){

    char arr[20];
    cout<<"Enter the 1st array: ";
    cin>>arr;

    cout<<"Output: ";
    cout<<arr<<endl;

    char arr1[20];
    cout<<"Enter the 2nd array: ";
    cin.getline(arr1,20);

    cout<<"After using 'cin.getline()': ";
    cout<<arr1<<endl;
    return 0;
}
