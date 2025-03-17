#include <iostream>
using namespace std;

int main(){

int n;
cout<<"Enter the number of elements of the array:";
cin>>n;

int arr[n];


for(int i=0; i<n; i++){
    cout<<"Enter the element "<<i+1<<":";
    cin>>arr[i];
}
int myMin = arr[0];
int myMax = arr[0];

for(int i=0; i<n; i++){
    if(arr[i]>myMax){
        myMax=arr[i];
    }
    if(arr[i]<myMin){
        myMin=arr[i];
    }
}
cout<<"Min:"<<myMin<<endl;
cout<<"Max:"<<myMax<<endl;





}



