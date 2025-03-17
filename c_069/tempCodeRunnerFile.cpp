#include <iostream>
#include <array>
using namespace std;
# define n 5
int queueArray[n]; //queue 
int front=-1; 
int rear =-1;

void enqueue(int data){
    //overflow
    if(rear==n-1){
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
        rear++;
        queueArray[rear]=data;
    }
}