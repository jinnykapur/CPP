#include <iostream>
#include <vector>
using namespace std;

int insertEnd(int arr[],int n,int element){
    cout<<sizeof(arr)<<endl;
    int arr2[n+1];
    for(int i=0;i<=n;i++){

        if(i==sizeof(arr)){
            arr2[i]=element;
            i++;
        }
        else{
            arr2[i]=arr[i];
        }
    }
    for(int i=0;i<=n;i++){
        cout<<arr2[i]<<endl;
    }

}
int main()
{

    int n,position,element;
    cout<<"Enter the no. of elements of array: ";
    cin>>n;
    int arr[n-1];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //cout<<"Enter the position of element to be inserted: ";
    //cin>>position;
    cout<<"Enter the element: ";
    cin>>element;
    //insert element in the end
    insertEnd(arr, n, element);



}
