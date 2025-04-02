#include <iostream>

using namespace std;

//creating a global variable head
struct Node* head =0;

//Defining the NODE structure
struct Node{
    int data;
    int priority;
    struct Node* next; //next : address of next node is stored
};

void enqueue(int newData, int priority){
    struct Node* newNode=new Node();
    
    newNode->data=newData;
    newNode->priority=priority;

    //empty queue
    if(head==0){
        // newNode->next=head;
        head=newNode;
        return;
    }

    if(head->priority<newNode->priority){
        newNode->next=head;
        head=newNode;
        return;
    }
    // traverse to find the position to be inserted
    struct Node* temp=head;
    while(temp->next!=0 && temp->next->priority>=priority){
        cout<<temp->next->priority<<endl;
        if(temp->next->priority==priority){
            cout<<"Priority already exists..."<<endl;
            return;
        }
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

void dequeue(){
    //underflow
    if(head==0){
        cout<<"Priority Queue is empty..."<<endl;
        return;
    }
    struct Node* temp=head;
    cout<<"Node removed: "<<head->data<<endl;
    head=head->next;
    delete temp;
}

void peak(){
     //underflow
    if(head==0){
        cout<<"Priority Queue is empty..."<<endl;
        return;
    }
    cout<<"Peek/front value: "<<head->data<<endl;
}

void display(){
    //when queue is empty
    if(head==0){
        cout<<"Underflow..."<<endl;
        return;
    }
    struct Node*temp=head;
    while(temp!=0){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    int ch;
    int data, priority;
    do{
        cout<<"Enter 1 for insert, 2 for delete, 3 for top, 4 for display & 0 to exit"<<endl;
        cin>>ch;
        cout<<"-----------------------------"<<endl;
        switch(ch){
            case 1:cout<<"Enter the data you want to PUSH: "<<endl;
            cin>>data;
            cout<<"Enter priority: "<<endl;
            cin>>priority;
            enqueue(data, priority);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            peak();
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