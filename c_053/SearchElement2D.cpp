#include <iostream>
#include <array>
using namespace std;

int main(){
    int n,m;
    cout<<"n: ";
    cin>>n;
    cout<<"m: ";
    cin>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"2D array:"<<endl;
    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int se;
    cout<<"Enter the element you want to search: ";
    cin>>se;
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            if(se==arr[i][j]){
                cout<<"Index of the element: ("<<i<<" ,"<<j<<")"<<endl;
            }
        }
    }
    return 0;
}
