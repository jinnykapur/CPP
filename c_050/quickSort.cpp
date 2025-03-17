#include <iostream>
#include <array>
using namespace std;

int partitionFunc(int arr[], int low, int high)
{
    int pivot=arr[high];
    int i=low-1; //will be used for swapping
    for(int j=low; j<=high-1; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[high]);
    return(i+1); //return the partitioning index
}
void quickSort(int arr[],int low, int high)
{
    if(low<high){
        int pi=partitionFunc(arr,low,high); //partitioning index
        quickSort(arr, low, pi-1);
        quickSort(arr,pi+1,high);
    }

}

int main(){
    int n;
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
    quickSort(arr, 0,n-1);
    cout<<"Array after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}
