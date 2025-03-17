#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    stack<string> s;
    s.push("!");
    s.push("World");
    s.push("Hello");
    cout<<"Top Element: "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element after removing the topmost element: "<<s.top()<<endl;
    cout<<"size of stack: "<<s.size()<<endl;
    cout<<"Stack Empty or not:"<<s.empty()<<endl;
    
}