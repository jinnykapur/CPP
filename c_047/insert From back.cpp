#include <iostream>
#include <array>

using namespace std;

int insertEnd(int arr[],int n,int element){

    arr[n]=element;
    cout<<"Output:"<<endl;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main(){
    int n,element,position;
    cout<<"Enter the no. of elements of array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the element: ";
    cin>>element;

    insertEnd(arr,n,element);
    return 0;
}
