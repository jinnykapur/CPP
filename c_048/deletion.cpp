#include <iostream>
#include <array>

using namespace std;

int deleteFirst(int n, int arr[])
{
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"Output:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int deleteEnd(int n, int arr[])
{
    n--;
    cout<<"Output:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int deleteKth(int n, int arr[], int position)
{
    for(int i=position; i<n-1; i++){
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"Output:"<<endl;
    for(int i=0;i<n;i++){
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
    cout << "Enter the position: ";
    cin >> position;



    //cout<<"Enter the element: ";
    //cin>>element;


    //deleteFirst(n, arr);
    //deleteEnd(n,arr);
    deleteKth(n,arr,position);
    return 0;

}
