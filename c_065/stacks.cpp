/*
Stack: Linear Datastructure (like array) that follows a particular order 
in which operations are performed.
The order maybe LIFO (Last In First Out) or FILO (First In Last Out).
*/
#include <iostream>
#include <array>
using namespace std;
# define n 5
int stackArray[n]; //stack 
int top=-1; 
//Array Implementation of STACK
void push(int data){
    if(top==n-1){
        cout<<"Overflow..."<<endl;
        return;
    }
    stackArray[top]=data;
    top++;
}
void pop(){
    if(top==-1){
        cout<<"Underflow.."<<endl;
        return;
    }
    cout<<"Element popped: "<<stackArray[top-1]<<endl;
    top--;
}
void stackTop(){
    
    if(top==-1){
        cout<<"Underflow.."<<endl;
        return;
    }
    cout<<"Top element: "<<stackArray[top-1]<<endl;
}
void display(){
    cout<<"Stack:"<<endl;
    for(int i=top-1;i>=-1;i--){
        cout<<stackArray[i]<<endl;
    }
    
    cout<<endl;
}
int main(){
    int ch;
    int data;
    do{
        cout<<"Enter 1 for push, 2 for pop, 3 for top, 4 for display & 0 to exit"<<endl;
        cin>>ch;
        switch(ch){
            case 1:cout<<"Enter the data you want to PUSH: "<<endl;
            cin>>data;
            push(data);
            break;
            case 2:
            pop();
            break;
            case 3:
            stackTop();
            break;
            case 4:
            display();
            break;
            
            default: cout<<"Invalid number entered!"<<endl;
            break;
            
        }
        cout<<"-----------------------------"<<endl;
    }
    while(ch!=0);
    
}