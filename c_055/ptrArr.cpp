#include <iostream>
#include <array>
using namespace std;

int main(){
    
    int myNum[5]={4,2,3,1,6};
    cout<<myNum<<endl; //prints the address of myNum[0]
    cout<<*myNum<<endl; //print the value of 0th position i.e. 4
    cout<<myNum+2<<endl; //myNum[2]
    cout<<*(myNum+2)<<endl; //3
}