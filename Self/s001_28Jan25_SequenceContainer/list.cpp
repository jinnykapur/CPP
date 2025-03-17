#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> l; //empty list
    list<int> n(5,100); //5 elements and each elements is 100
    //printing list 'n'
    cout<<"n: ";
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;
    //adding elements in list 'l'
    l.push_back(1);
    l.push_front(2);
    //printing list 'l'
    cout<<"l: ";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    //erasing 1st element 
    cout<<"Erasing the 1st element & printing after erase:"<<endl;
    l.erase(l.begin());
    cout<<"l: ";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    //size of both the lists:
    cout<<"Size of l: "<<l.size()<<endl;
    cout<<"Size of n: "<<n.size()<<endl;
}