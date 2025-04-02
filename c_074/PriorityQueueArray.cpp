//# MAX PRIORTIY QUEUE

#include <iostream>
#include <array>
using namespace std;
# define n 5
int queueArray[n]; //queue 
int pqArray[n]; //priortiy queue array
int s=0; //when there are no elements, initialising size 0.

void enqueue(int data, int priority){
    //overflow
    if(s==n){
        cout<<"Overflow..."<<endl;
        return;
    }
    for(int i=0;i<s;i++){
        if(pqArray[i]==priority){
            cout<<"Priority already exists..."<<endl;
            return;
        }
    }
    int i=s-1;
    while(i>=0 && pqArray[i]<priority){   //shifting
        queueArray[i+1]=queueArray[i];
        pqArray[i+1]=pqArray[i];
        i--;
    }
    queueArray[i+1]=data;
    pqArray[i+1]=priority;
    s++;

}

void dequeue(){
    //underflow
    if(s==0){
        cout<<"Underflow..."<<endl;
        return;
    }
    cout<<"Removing: "<<queueArray[0]<<endl;
    //shifting
    int i=0;
    while(i!=s-1){
        pqArray[i]=pqArray[i+1];
        queueArray[i]=queueArray[i+1];
        i++;
    }
    s--;
}

void peak()
{
    //underflow
    if(s==0){
        cout<<"Underflow..."<<endl;
        return;
    }
    cout<<"Top: "<<queueArray[0]<<endl;
}

void display(){
    for(int i=0;i<s;i++){
        cout<<queueArray[i]<<"(Priority = "<<pqArray[i]<<")"<<endl;
    }
}

int main(){
    int ch;
    int data, priority;
    do{
        cout<<"Enter 1 for insert, 2 for delete, 3 for top, 4 for display & 0 to exit"<<endl;
        cin>>ch;
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
