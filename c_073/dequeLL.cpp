#include <iostream>
using namespace std;

//creating a global variable head
struct Node* front =0;
struct Node* rear =0;

//Defining the NODE structure
struct Node{
    int data;
    struct Node* prev; //Previous: points to the previous node of the previous node.
    struct Node* next; //next : points to the next node of the current node
};

void enqueueFront(int newData){
    struct Node* newNode=new Node();
    newNode->data=newData;
    //if queue is empty
    if(rear==0 && front==0){
        front=rear=newNode;
        return;
    }
    newNode->next=front;
    front->prev=newNode;
    front=newNode;
}

void enqueueBack(int newData){
    struct Node* newNode=new Node();
    newNode->data=newData;
    //if queue is empty
    if(rear==0 && front==0){
        front=rear=newNode;
        return;
    }
    newNode->prev=rear;
    rear->next=newNode;
    rear=newNode;
}

void dequeueFront(){
    
    if(front==0 && rear==0){
        cout<<"Underflow..."<<endl;
    }
    else{
        cout<<"Deleted node: "<<front->data<<endl;
        struct Node* temp=front;
        front=front->next; //to check if the next node is available
        if(front==0){
            rear=0;
        }
        else{
            front->prev=0;
        }
        delete temp;
    }
}

void dequeueBack(){
    if(front==0 && rear==0){
        cout<<"Underflow..."<<endl;
    }
    else{
        cout<<"Deleted node: "<<rear->data<<endl;
        struct Node* temp=rear;
        rear=rear->prev; //to check if the previous node is available
        if(rear==0){
            front=0;
        }
        else{
            rear->next=0;
        }
        delete temp;
    }
}

void peekFront(){
    if(front==0 && rear==0){
        cout<<"Underflow..."<<endl;
    }
    else{
        cout<<"Front Element: "<<front->data<<endl;
    }

}
void peekBack(){
    if(front==0 && rear==0){
        cout<<"Underflow..."<<endl;
    }
    else{
        cout<<"Rear Element: "<<rear->data<<endl;
    }
}

void display(){
    if(front==0 && rear==0){
        cout<<"Underflow..."<<endl;
    }
    struct Node* temp=front;
    while(temp->next!=0){
      cout<<temp->data<<" ";
      temp=temp->next;
    }
    cout<<temp->data<<" ";
    cout<<endl;
}

int main(){
    int ch;
    int data;
    do{
        cout<<"Enter Choice:"<<endl;
        cout<<"1. Insert from front\n2.Insert from back\n3. Delete from front\n4.Delete from back\n5.Peek from front\n6.Peek from back\n7.Display\n0. EXIT\n--------------------------------------------------"<<endl;
        cin>>ch;
        switch(ch){
            case 1:cout<<"Enter the data you want to PUSH from front: "<<endl;
            cin>>data;
            enqueueFront(data);
            break;
            
            case 2:cout<<"Enter the data you want to PUSH from back : "<<endl;
            cin>>data;
            enqueueBack(data);
            break;
            case 3:
            dequeueFront();
            break;
            case 4:
            dequeueBack();
            break;
            case 5:
            peekFront();
            break;
            case 6:
            peekBack();
            break;
            case 7:
            display();
            break;
            
            default: cout<<"Invalid number entered!"<<endl;
            break;
            
        }
        cout<<"-----------------------------"<<endl;
    }
    while(ch!=0);
}