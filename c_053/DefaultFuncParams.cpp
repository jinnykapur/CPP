#include <iostream>
using namespace std;

void display(int x, int y, int z=10){  //z=10 declaring the default value
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<"z = "<<z<<endl;
}
int main(){
    display(4,5,6);
    display(1,2); //calling without z parameter, so it will use z's default value 
}



