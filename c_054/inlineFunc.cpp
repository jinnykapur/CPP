/*
    Inline Function:
    When we call a function generally it causes a certain overhead such as stack, argument, junks, etc.
    which takes some execution time, so when we call same fucntion 10 times, the parameters of that function
    and all these things will be stored in the stack and the control should be transfered from the main function 
    to that function many times and which increases the execution, so to overcome this, we use inline fucntion.

    When we use inline keyword before our fucntion, compiler places that function in the main function which saves our 
    execution time.

    NOTE: we should use inline with VERY SHORT functions only.

*/
#include <iostream>
using namespace std;
inline void display(int a){
    cout<<a;
}
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    display(a);
}