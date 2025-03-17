/*
Singly Linked List

It's a type of a data structure where each item (called node) has 2 parts :

1. Data & 2.Link to the next node in the list.

We start from the first node called as head and keep going until the link is empty (NULL).

For eg.:
9 -> 2 -> 7 -> 1 -> NULL
in the above example, the node containing 9 is the HEAD and the node containing 1 is the last node (NULL).
*/

//implementation 

#include <iostream>

using namespace std;

//creating a global variable head
struct Node* head =NULL;

//Defining the NODE structure
struct Node{
    int data;
    struct Node* next; //next : address of next node is stored
};


//Insert at beginning
void insertAtBeginning(int newData){

    //calling the structure and make an OBJECT
    struct Node* newNode=new Node();
    newNode->data=newData;
    newNode-> next= head; //set the new node's next to the current head
    head=newNode; //move the head to point the new node

}

//insertion at the specific position
void insertSpecific(int newData, int pos){
    struct Node* newNode=new Node();
    struct Node* temp=head; 
    newNode->data=newData;
    newNode->next=NULL;
    //if position = 1 (beginning)
    if(pos==1){
        newNode->next=head;
        head=newNode;
        return;
    }
    // if position is not 1
    //traverse to the node before the desired postion (pos - 1)
    for(int i=1;temp!=NULL && i<pos-1;i++){
        temp=temp->next;    
    }

    //if position is NULL (end)
    if(temp==NULL){
        cout<<"Postion is out of bound."<<endl;
    }
    // if the node is inserted at the end (last position), it won't insert the node at the end but print the message
    // "Postion is out of bound.".... So, we need to make another function
    /// because if we insert the element at the end then we should know the exact position of the end node 
    //which is not possible & even if we get to know the of end node, then also if any other node is to be 
    // after that will be inserted at the end position, which is WRONG.
    newNode->next=temp->next;
    temp->next=newNode;

}
void insertAtEnd(int newData){
    
    struct Node* newNode=new Node();
    struct Node* temp=head; 
    newNode->data=newData;
    newNode->next=NULL;
    //if the list is empty, make the new node = head
    if(head==NULL){
        head=newNode;
        return;
    }
    // traverse to the last node
    while(temp->next!=NULL){
        temp=temp->next;

    }
    //insert a new node at the end
    temp->next=newNode;

}
void display(){
    struct Node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<"NULL\n";
}
int main(){
    insertAtBeginning(5);
    display();
    cout<<endl;
    insertAtBeginning(3);
    display();
    cout<<endl;
    insertAtBeginning(7);
    display();
    cout<<endl;
    insertAtEnd(9);
    display();
    cout<<endl;
    insertSpecific(11,2);
    display();
    cout<<endl;

}

