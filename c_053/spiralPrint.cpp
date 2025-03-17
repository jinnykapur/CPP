#include <iostream>
#include <array>
using namespace std;
/*
1 2 3
8 9 4
7 6 5

*/

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
   
    int rs=0, cs=0;
    int re=n-1, ce=m-1;
    cout<<"Spiral print: ";
    while(rs<=re && cs<=ce){
        // for row start
        for(int col=cs; col<=ce;col++){
            cout<<arr[rs][col]<<" ";
        }
        rs++;
        // for column end
        for(int row=rs; row<=re;row++){
            cout<<arr[row][ce]<<" ";
        }
        ce--;
        // for row end
        for(int col=ce; col>=cs;col--){
            cout<<arr[re][col]<<" ";
        }
        re--;
        // for column start
        for(int row=re; row>=rs;row--){
            cout<<arr[row][cs]<<" ";
        }
        cs++;
    }

}