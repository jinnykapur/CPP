/*
    Pointers

    A pointer is a variable which is used to store address of other vairable.

    To make a pointer, we have to declare a datatype which is same as the datatype of the variable.

*/

#include <iostream>
using namespace std;

int main(){
    int age=20;
    int *ageptr;
    ageptr=&age;
    cout<<age<<endl;
    cout<<ageptr<<endl;
    return 0;
}