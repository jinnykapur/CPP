#include <iostream>
using namespace std;

//creating a global variable head
struct Node* head =NULL;

//Defining the NODE structure
struct Node{
    int data;
    struct Node* next; //next : address of next node is stored
};

void deleteHead(){
    struct Node* ptr;
    //empty list
    if(head==NULL){
        //blank list
        cout<<"List is empty."<<endl;
        return;
    }
    //when only one node is there in the list.
    if(head->next==NULL){
        delete head;
        head=NULL;
        return;
    }
    //if there are multiple nodes in the list.
    head=head->next;
    delete ptr;
}
void deleteEnd(){
    
    //empty list
    if(head==NULL){
        //blank list
        cout<<"List is empty."<<endl;
        return;
    }
    //when only one node is there in the list.
    if(head->next==NULL){
        delete head;
        head=NULL;
        return;
    }
    //if the list has more elements 
    struct Node* temp=head; 
    //temp->next->next is pointing at the second last node
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
}

void deleteSpecific(int position){
     //empty list
     if(head==NULL){
        //blank list
        cout<<"List is empty."<<endl;
        return;
    }
    if(position==1){
        deleteHead();
        return;
    }
    struct Node* temp=head;
    for(int i=1;i<position-1 ;i++){
        temp=temp->next;
    }
    if(temp->next==NULL){
        cout<<"Position out of range!"<<endl;
        return;
    }
    struct Node* nodeToDelete = temp->next;
    temp->next=temp->next->next;
    delete nodeToDelete;

}

void deleteBykey(int key){
    int pos=1;
    int flag=0;
    struct Node* temp=head;
    struct Node* prev=temp;
    for(int i=1;prev->next!=NULL;i++){
        
       if(temp->data==key){
        flag=1;
        
        deleteSpecific(pos);
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
    struct Node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<"NULL\n";
}

//Insert at beginning
void insertAtBeginning(int newData){

    //calling the structure and make an OBJECT
    struct Node* newNode=new Node();
    newNode->data=newData;
    newNode-> next= head; //set the new node's next to the current head
    head=newNode; //move the head to point the new node

}
int main(){
    insertAtBeginning(5);
    insertAtBeginning(3);
    insertAtBeginning(4);
    insertAtBeginning(1);
    insertAtBeginning(2);
    display();
    cout<<endl;
    deleteBykey(5);
    display();
    cout<<endl;
    // deleteEnd();
    // display();
    // cout<<endl;
    // deleteHead();
    // display();
    // cout<<endl;
    // deleteSpecific(3);
    // display();
    // cout<<endl;
    
}