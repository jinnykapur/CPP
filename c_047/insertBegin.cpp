#include <iostream>
#include <array>

using namespace std;

int insertBegin(int arr[],int n,int element){

     for(int i=n;i>=0;i--){
        arr[i+1]=arr[i]; //UPDATING & SHIFTING VALUE FROM ONE PLACE
     }
     arr[0]=element;// beginning hai so, element is equal to first index
     cout<<"Output:"<<endl;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
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

    insertBegin(arr,n,element);
    return 0;
}

