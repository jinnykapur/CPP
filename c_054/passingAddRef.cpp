/*
    passing a pointer to a fucntion

    pass by address by reference

*/

#include <iostream>
using namespace std;

void pointerA(int *aptr){
    cout<<aptr<<endl;
    cout<<*aptr<<endl; //* value access
    *aptr=10;
}
int main(){
    int a=20;
    int *aptr; 
    aptr=&a; //& address access
    cout<<a<<endl;
    pointerA(aptr);
    cout<<a<<endl;
}