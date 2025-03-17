#include <iostream>

using namespace std;

//creating a global variable head
struct Node* front =0;
struct Node* rear =0;

//Defining the NODE structure
struct Node{
    int data;
    struct Node* next; //next : address of next node is stored
};

void enqueue(int newData){
    struct Node* newNode=new Node();
    newNode->data=newData;
    //inserting at end of queue
    
    newNode->next=0;

    //if queue is empty
    if(rear==0 && front==0){
        front=rear=newNode;
        return;
    }
    rear->next=newNode;
    rear=newNode;
}

void dequeue(){
    //when queue is empty
    if(rear==0 && front==0){
        cout<<"Underflow..."<<endl;
        return;
    }
    struct Node* temp=front;
    cout<<"Node removed: "<<front->data<<endl;
    front=front->next;
    delete temp;
}
void peek(){
    //when queue is empty
    if(rear==0 && front==0){
        cout<<"Underflow..."<<endl;
        return;
    }
    cout<<"Peek/front value: "<<front->data<<endl;
}
void display(){
    //when queue is empty
    if(rear==0 && front==0){
        cout<<"Underflow..."<<endl;
        return;
    }
    struct Node*temp=front;
    while(temp!=0){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    // enqueue(100);
    // enqueue(200);
    // enqueue(300);
    // display();
    // dequeue();
    // display();
    // peek();
    int ch;
    int data;
    do{
        cout<<"Enter 1 for insert, 2 for delete, 3 for top, 4 for display & 0 to exit"<<endl;
        cin>>ch;
        switch(ch){
            case 1:cout<<"Enter the data you want to PUSH: "<<endl;
            cin>>data;
            enqueue(data);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            peek();
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
