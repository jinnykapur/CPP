#include <iostream>
#include <array>
using namespace std;

/*
input: My name is Jinny.
output: Jinny

*/
int main(){
    int n;
    cout<<"Enter the length of char array: ";
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cout<<"Enter your char array: ";
    cin.getline(arr,n);
    
    /*
    //printing each character of character array
    for(int i=0;i<=n;i++){
        
        if(arr[i]!='\0'){
            cout<<arr[i]<<endl;
        }
        else{
            break;
        }
    }
    */
    int si=0, wl=0, maxSi=0, maxWl=0;
    for(int i=0;arr[i]!='\0';i++){
        
        if(arr[i]!= ' '){
            wl++;
        }
        else{
            if(wl>maxWl){
                maxWl=wl;
                maxSi=si;
            }
            wl=0;
            si=i+1;
        }
    }
    if(wl>maxWl){
                maxWl=wl;
                maxSi=si;
            }

    cout<<"Largest word:";
    for(int i=maxSi; i<maxSi+maxWl;i++){
        cout<<arr[i];
    }
    
    
    
    return 0;



}