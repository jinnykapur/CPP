//Insert at beginning
void insertAtBeginning(int newData){

    //calling the structure and make an OBJECT
    struct Node* newNode=new Node();
    newNode->data=newData;
    newNode-> next= head; //set the new node's next to the current head
    head=newNode; //move the head to point the new node

}