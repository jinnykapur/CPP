/*
DOUBLY LINKED LIST
It's a 2-way list in which each node has 2 pointers, the previous 
& the next.
Next: points to the next node of the current node
Previous: points to the previous node of the previous node.

Doubly linked list has an extra previous pointer 
unlike the singly linked list which allows the traversal in both
forward and backward directions.

*/



#include <iostream>
using namespace std;

//creating a global variable head
struct Node* head =NULL;

//Defining the NODE structure
struct Node{
    int data;
    struct Node* prev; //Previous: points to the previous node of the previous node.
    struct Node* next; //next : points to the next node of the current node
};

void insertAtBeginning(int newData){
 
    struct Node* newNode=new Node();
    newNode->data=newData;
    if(head==NULL){
        head=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
void insertAtEnd(int newData){
    struct Node* newNode=new Node();
    newNode->data=newData;
    if(head==NULL){
        head=newNode;
        return;
    }
    struct Node* temp=head;
    // traverse to the last node
    while(temp->next!=NULL){
        temp=temp->next;
    }
    //insert a new node at the end
    temp->next=newNode;
    newNode->prev=temp;
}
void insertAtSpecific(int newData, int position){
    struct Node* newNode=new Node();
    struct Node* temp=head; 
    newNode->data=newData;
    //if position = 1 (beginning)
    if(position==1){
        insertAtBeginning(newData);
        return;
    }
    for(int i=1;temp!=NULL && i<position-1;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"Position is out of range!"<<endl;
        return;
    }

    newNode->prev=temp;
    newNode->next=temp->next;
    if(temp->next!=NULL){
        temp->next->prev=newNode;
    }
    temp->next=newNode;

}
void deleteAtbeginning(){
    //empty list
    if(head==NULL){
        cout<<"List is empty."<<endl;
        return;
    }
    struct Node* temp=head;
    head = head->next; 
    //to check if there next node available in list
    if(head!=NULL){   
        head->prev=NULL; //we write this if there's atleast one element 
    }
    delete temp;
}
void deleteAtEnd(){
    //empty list
    if(head==NULL){
        cout<<"List is empty."<<endl;
        return;
    }
    struct Node* temp=head;
    //if there's one element after deletion
    if(temp->next==NULL){
        head=NULL;
        delete temp;
        return;
    }
    //traverse to the last node in list if there are multiple nodes.
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->prev->next=NULL;
    delete temp;
}
void deleteAtSpecific(int position){
    //empty list
    if(head==NULL){
        cout<<"List is empty."<<endl;
        return;
    }
    //delete head
    if(position==1){
        deleteAtbeginning();
        return;
    }
    struct Node* temp=head;
    //traverse
    for(int i=1;temp!=NULL && i<position;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"Position out of range.."<<endl;
        return;
    }
    if(temp->next!=NULL){
        temp->next->prev=temp->prev;
    }
    if(temp->prev!=NULL){
        temp->prev->next=temp->next;
    }
    delete temp;


}
void deleteByKey(int key){
    int pos=1;
    int flag=0;
    struct Node* temp=head;
    struct Node* pre=temp;
    for(int i=1;pre->next!=NULL;i++){
        
       if(temp->data==key){
        flag=1;
        
        deleteAtSpecific(pos);
        return;
       }
       pos=pos+1;
       pre=temp;
       temp=temp->next;
       
    }
    if(flag==0){
        cout<<key<<" doesn't exist."<<endl;
    }
}
void displayForward(){
    struct Node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<"NULL\n";
}
void displayBackward(){
    struct Node* ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr=ptr->prev;
    }
    cout<<"NULL\n";
    
}
int main(){
    insertAtBeginning(12);
    displayForward();
    cout<<endl;

    insertAtBeginning(13);
    displayForward();
    cout<<endl;

    insertAtBeginning(14);
    displayForward();
    cout<<endl;

    insertAtEnd(15);
    displayForward();
    cout<<endl;

    insertAtSpecific(16,2);
    displayForward();
    //displayBackward();
    cout<<endl;

    deleteByKey(15);
    displayForward();
    cout<<endl;

    // deleteAtbeginning();
    // displayForward();
    // cout<<endl;
    // deleteAtEnd();
    // displayForward();
    // cout<<endl;
    // deleteAtSpecific(2);
    // displayForward();
    // cout<<endl;

}