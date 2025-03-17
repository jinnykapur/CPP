#include <iostream>
#include <array>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    char arr[n+1];
    cout<<"Enter array: ";
    cin>>arr;

    cout<<"arr[-2]:"<<arr[-4]<<endl;//negative indexing is not possible
    cout<<"arr[n]: "<<arr[n]<<endl;
    cout<<"arr[n-1]: "<<arr[n-1]<<endl;
}
