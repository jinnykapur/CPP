#include <iostream>
#include <array>
using namespace std;

int main(){

    int n=50;
    char arr[n+1]="Jinny";

    for(int i=0;i<=n;i++){
        if(arr[i]!='\0'){  // \0 : null character
           cout<<arr[i]<<endl;

        }
        else{
            break;
        }
    }
    return 0;
}
