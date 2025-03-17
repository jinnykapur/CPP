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