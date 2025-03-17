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

    //if queue is empty
    if(rear==0 && front==0){
        front=rear=newNode;
        rear->next=front;
        return;
    }
    rear->next=newNode;
    rear=newNode;
    rear->next=front;
}

void dequeue(){
    //when queue is empty
    if(rear==0 && front==0){
        cout<<"Underflow..."<<endl;
        return;
    }
    struct Node* temp=front;

    cout<<"Node removed: "<<front->data<<endl;
    //only if 1 node is present
    if(front==rear){
        cout<<"Node removed: "<<front->data<<endl;
        front=rear=0;
        delete temp;
        return;
    }

    front=front->next;
    rear->next=front;
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
    while(temp->next!=front){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<temp->data<<"  ";
    cout<<endl;
}
int main(){
    
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
