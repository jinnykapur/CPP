#include <iostream>
using namespace std;
int myTest2(); //function protyping : declaring myTest2() when it's not in the scope
//Create a function myTest() and call the function

int main(){
   
    myTest2();
}

int myTest2(){
    cout<<"Hello2"<<endl;
}

