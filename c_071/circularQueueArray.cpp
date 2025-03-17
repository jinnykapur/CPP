#include <iostream>
#include <array>
using namespace std;
# define n 3
int queueArray[n]; //queue 
int front=-1; 
int rear =-1;

void enqueue(int data){
    //overflow
    if((rear+1)%n==front){
        cout<<"Overflow..."<<endl;
    }
    //when queue is empty and we are inserting 1st element
    else if(front==-1 && rear ==-1){
        front=rear=0;
        queueArray[rear]=data;
        //front++; rear++;
    }
    //insertion at rear
    else{
        rear=(rear+1)%n;
        queueArray[rear]=data;
    }
}

void dequeue(){
    //underflow
    if(front==-1 && rear==-1){
        cout<<"Underflow..."<<endl;
    }
    //when there's only 1 element left in the queue
    else if(front==rear){
        cout<<"Removing element: "<<queueArray[front]<<endl;
        front=rear=-1;
    }
    else{
        cout<<"Removing element: "<<queueArray[front]<<endl;
        front=(front+1)%n;
        cout<<"New front: "<<queueArray[front]<<endl;
    }
}

void peak(){
    //underflow
    if(front==-1 && rear==-1){
        cout<<"Underflow..."<<endl;
        return;
    }
    //print
    cout<<"Peak / front Element:"<<queueArray[front]<<endl;

}

void display(){
    if(front==-1 && rear==-1){
        cout<<"Underflow..."<<endl;
        return;
    }
    int i=front;
    while(i!=rear){
        cout<<queueArray[i]<<" ";
        i=(i+1)%n;
    }
    cout<<queueArray[i]<<" ";
    
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