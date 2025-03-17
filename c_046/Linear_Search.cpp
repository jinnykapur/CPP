#include <iostream>
using namespace std;

int linearSearch(int n, int arr[], int key)
{
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter no. of elements of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key: ";
    cin>>key;

    int myOutput=linearSearch(n,arr,key);
    cout<<myOutput;
    return 0;
}

