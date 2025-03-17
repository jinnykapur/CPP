/*
Recursion is a technique in which a function calls itself repeatively 
until a given conditon is satisfied.
In other words, recursion is a process of solving a problem by breaking down into 
smaller, simpler sub-problems.

*/

#include <iostream>
using namespace std;

//write a program to find the sum of 1st 'n' natural numbers by using recursion.
int nSum(int n){
    if(n==0){
        return 0;
    }
    int result=n+nSum(n-1);
    return result;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"sum:"<<nSum(n)<<endl;
    // int sum=0;
    // for(int i=1;i<=n;i++){
    //     sum=sum+i;
    // }
    // cout<<"sum:"<<sum<<endl;
}
