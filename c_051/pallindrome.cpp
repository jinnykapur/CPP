#include <iostream>
#include <array>
using namespace std;
/*
nitin  true
mohit  false
*/

int main(){
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    char arr[n+1];
    cout<<"Enter your character array without space: ";
    cin>>arr;
    int pal=1; //flag variable
    for(int i=0;i<=n;i++){
        if(arr[i]!=arr[n-1-i]){
            pal=0;
            break;
        }
    }
    if(pal==1){
        cout<<"It's a palindrome.";
    }
    else{
        cout<<"It's not a palindrome.";
    }
}
