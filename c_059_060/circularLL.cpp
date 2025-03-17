/*
CIRCULAR LINED LIST  is a linear data structure //r to the singly linked list.
where each node consists of 2 data members (data & a pointer to next node),

Here, unlike singly linked list, where last last node's NEXT points to NULL,
but in this the last node's NEXT points to the Head's node's address which 
creates a circular chain of nodes.

*/

#include <iostream>

using namespace std;

//creating a global variable head
struct Node* head =NULL;

//Defining the NODE structure
struct Node{
    int data;
    struct Node* next; //next : address of next node is stored
};

void insertAtBeginning(int newData){
    struct Node* newNode=new Node();
   
    newNode->data=newData;
    //list is empty and we are inserting new node.
    if(head==NULL){
        head=newNode;
        head->next=head;
        return;
    }
    struct Node* temp=head; 
    //traverse
    while(temp->next!=head){
        temp=temp->next;
    }
    newNode->next=head;
    temp->next=newNode;
    head=newNode;
}
void insertAtEnd(int newData){
    struct Node* newNode=new Node();
   
    newNode->data=newData;
    //list is empty and we are inserting new node.
    if(head==NULL){
        head=newNode;
        head->next=head;
        return;
    }
    struct Node* temp=head; 
    //traverse
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=head;
}
void insertSpecific(int newData, int position){
    struct Node* newNode=new Node();
   
    newNode->data=newData;
    if(position==1){
        insertAtBeginning(newData);
        return;
    }
    struct Node* temp=head; 
    //traverse
    for(int i=1;temp->next!=head && i<position-1;i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void deleteHead(){

    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    if(head->next==NULL){
        delete head;
        head=NULL;
        return;
    }
    struct Node* temp=head; 
    while(temp->next!=head){
        temp=temp->next;
    }//now temp stores the end node
    struct Node* tempHead=head; //stores new head
    temp->next=head->next;
    head=head->next;
    delete tempHead; 

}
void deleteEnd(){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    if(head->next==NULL){
        delete head;
        head=NULL;
        return;
    }
    struct Node* temp=head;
    struct Node* prev=NULL;
    while(temp->next!=head){
        prev=temp;
        temp=temp->next;
    }
    prev->next=head;
    delete temp;
}
void deleteByPosition(int position){
    
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    if(position<1){
        cout<<"Position cannot be less than 1."<<endl;
        return;
    }
    if(position==1){
        deleteHead();
        return;
    }
    struct Node* temp=head;
    for(int i=1;i<position-1;i++){
      
        if(temp->next->next==head){
            cout<<"Position out of range!"<<endl;
            return;
        }
        temp=temp->next;
    }
   
    struct Node* nodeToDelete = temp->next;
    temp->next=temp->next->next;
    delete nodeToDelete;

}
void deleteByKey(int key){   //key: linked list's node's data
    int pos=1;
    int flag=0;
    struct Node* temp=head;
    struct Node* prev=temp;
    for(int i=1;prev->next!=head;i++){
        
       if(temp->data==key){
        flag=1;
      
        deleteByPosition(pos);
        return;
       }
       pos=pos+1;
       prev=temp;
       temp=temp->next;
       
    }
    if(flag==0){
        cout<<key<<" doesn't exist."<<endl;
    }
}

void display(){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    struct Node* temp=head;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=head);
    cout<<"Head"<<endl;
}
int main(){
    insertAtBeginning(11);
    insertAtEnd(15);
    display();
    cout<<endl;
    insertSpecific(13,3);
    display();
    insertAtBeginning(14);
    display();
    cout<<endl;
    
    deleteByKey(15);
    display();
    cout<<endl;

    deleteByKey(13);
    display();
    cout<<endl;
    // deleteHead();
    // display();
    // cout<<endl;
    // deleteByPosition(2);
    // display();
    // cout<<endl;
    // deleteEnd();
    
    // display();
    // cout<<endl;
    // deleteByPosition(6);
    // display();
    // cout<<endl;

}