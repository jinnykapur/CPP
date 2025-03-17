/*
Const Keyword:
It is used to make elements such as variables, pointers,etc. a constant value. 
A constant has a value which doesn't change.

*/

#include <iostream>
#include <array>
using namespace std;

int main(){
    const double pi=3.14;
    cout<<pi<<endl;
    //pi=4;  //throws an error 
    cout<<pi<<endl;
}