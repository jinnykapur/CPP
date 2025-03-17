#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    switch(n){
        case 1 ... 99: cout<<"Less than 100";
        break;
        case 100: cout<<"Equal to 100";
        break;
        case 101 ... 200: cout<<"Greater than 100";
        break;
    }
    return 0;
}