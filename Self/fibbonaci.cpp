#include <iostream>
using namespace std;
#include <array>

int fibonacci(int n){
    if(n<0){
        cout<<"Please enter a positove integer!";
    }
    else if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }   
}
int main(){
    int n;
    cout<<"\n";
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"\n";
    cout<<"Fibonacci of "<<n<<" is: "<<fibonacci(n);
    cout<<"\n";
    cout<<"\nFibonacci series upto "<<n<<" is: ";
    for(int i=0; i<n; i++){
        cout<<fibonacci(i)<<" ";
    }  
    cout<<"\n";
    cout<<endl;

    return 0;
}