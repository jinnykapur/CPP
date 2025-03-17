#include <iostream>
#include <array>
using namespace std;

void selectionSort(int n, int arr[])
{
    //figuring out the smallest element
    for(int i=0;i<n-1;i++){
        int minEle=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minEle]){
                minEle=j;
            }
        }
        //swapping the minimum element
        swap(arr[i],arr[minEle]);
    }
}
/*
//if inbuilt swap function is not available

void swapEle(int i, int j, int arr[]){
    int temp=arr[i];
    arr[j]=arr[i];
    arr[i]=temp;
}

*/

int main(){
    int n,element,position;
    cout<<"Enter the no. of elements of array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array before sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selectionSort(n,arr);
    cout<<"Array after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}
