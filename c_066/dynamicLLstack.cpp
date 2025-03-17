//Dynamic ll


#include <iostream>

using namespace std;

//creating a global variable head
struct Node* top =0;

//Defining the NODE structure
struct Node{
    int data;
    struct Node* next; //next : address of next node is stored
};

void push(int newData){
    struct Node* newNode=new Node();
    newNode->data=newData;
    newNode->next=top;
    top=newNode;
}
void pop(){
    struct Node* temp=top;
    if(top==0){
        cout<<"Underflow..."<<endl;
        return;
    }
    cout<<"Element popped: "<<top->data<<endl;
    top=top->next;
    delete temp;
}
void stackTop(){
    if(top==0){
        cout<<"Underflow..."<<endl;
        return;
    }
    cout<<"Top element: "<<top->data<<endl;
}
void display(){
    
    struct Node* temp=top;
    if(top==0){
        cout<<"Underflow..."<<endl;
        return;
    }
    cout<<"Stack: "<<endl;
    while(temp!=0){
        cout<<temp->data<< endl;
        temp=temp->next;
    }
    
    cout<<"====================================="<<endl;
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