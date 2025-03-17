// we will implement deque using array by the logic of circular queue.

#include <iostream>
#include <array>
using namespace std;
# define n 5
int dequeArray[n]; //queue 
int front=-1; 
int rear =-1;

void enqueueFront(int data){
    if((front==0 && rear==n-1) || (front==rear+1)){
        cout<<"Overflow..."<<endl;
    }
    //blank
    else if(front==-1 && rear==-1){
        front=rear=0;
        dequeArray[front]=data;
    }

    //if front is at index 0, we'll move front to the end.
    else if(front==0){
        front=n-1;
        dequeArray[front]=data;
    }

    //standard insertion
    else{
        front--;
        dequeArray[front]=data;
    }
}

void enqueueBack(int data){
    if((front==0 && rear==n-1) || (front==rear+1)){
        cout<<"Overflow..."<<endl;
    }
    //blank
    else if(front==-1 && rear==-1){
        front=rear=0;
        dequeArray[rear]=data;
    }
     //if rear is at the end, we'll move rear to 0th index.
     else if(rear==n-1){
        rear=0;
        dequeArray[rear]=data;
    }

    //standard insertion
    else{
        rear++;
        dequeArray[rear]=data;
    }
}

void dequeueFront(){
    if(front==-1 && rear==-1){
        cout<<"Underflow..."<<endl;
    }
    else if(front==rear){
        cout<<"Deleting element from deque array: "<<dequeArray[front]<<endl;
        front=rear=-1;
    }
    else if(front==n-1){
        cout<<"Deleting element from deque array: "<<dequeArray[front]<<endl;
        front=0;
    }
    else{
        cout<<"Deleting element from deque array: "<<dequeArray[front]<<endl;
        front++;
    }
}
void dequeueBack(){
    if(front==-1 && rear==-1){
        cout<<"Underflow..."<<endl;
    }
    else if(front==rear){
        cout<<"Deleting element from deque array: "<<dequeArray[rear]<<endl;
        front=rear=-1;
    }
    else if(rear==0){
        cout<<"Deleting element from deque array: "<<dequeArray[rear]<<endl;
        rear=n-1;
    }
    else{
        cout<<"Deleting element from deque array: "<<dequeArray[rear]<<endl;
        rear--;
    }
}
void peekFront(){
    if(front==-1 && rear==-1){
        cout<<"Underflow..."<<endl;
    }
    else{
        cout<<"Front Element: "<<dequeArray[front]<<endl;
    }

}
void peekBack(){
    if(front==-1 && rear==-1){
        cout<<"Underflow..."<<endl;
    }
    else{
        cout<<"Rear Element: "<<dequeArray[rear]<<endl;
    }
}

void display(){
    if(front==-1 && rear==-1){
        cout<<"Underflow..."<<endl;
    }
    int i=front;
    while(i!=rear){
        cout<<dequeArray[i]<<" ";
        i=(i+1)%n;
    }
    cout<<dequeArray[i]<<" ";
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