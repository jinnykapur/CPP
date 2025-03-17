/*
    Passing Structure to Function by Value, Pointer (Address)
*/
#include <iostream>
#include <array>

using namespace std;

struct student{
        int rollNo;
        char gender;
    };

void display(student s){
    s.rollNo=50;
    s.gender='m'; //structure passing by value
    cout<<s.rollNo<<endl;
    cout<<s.gender<<endl;
}  

void show(student *s){
    s->rollNo=23;
    s->gender='f'; //structure passing by using pointer (address)
    cout<<s->rollNo<<endl;
    cout<<s->gender<<endl;
}
int main()
{
    student jinny={45,'f'};
    display(jinny); //calling by value
    cout<<endl;
    show(&jinny); //calling by reference /  address
    cout<<jinny.rollNo<<endl;
    
    return 0;

}