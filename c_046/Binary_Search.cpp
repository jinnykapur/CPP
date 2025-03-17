#include <iostream>
using namespace std;

int binarySearch(int n, int arr[], int key)
{
    int s=0;
    int e=n;
    while(s<=e){

        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
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

    int myOutput=binarySearch(n,arr,key);
    cout<<myOutput;
    return 0;
}
