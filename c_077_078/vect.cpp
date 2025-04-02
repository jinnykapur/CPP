#include <iostream>
#include <vector>
using namespace std;

int main(){
    //declaration of vector
    vector<int> vect;
    vect={2,6,7,8};
    cout<<*(vect.end())<<endl;
    cout<<*(--vect.end())<<endl;
    cout<<*(vect.end()-1)<<endl;
   
    for (int i:vect){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> :: iterator itr;
    for(itr=vect.begin();itr!=vect.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    vector<int> :: reverse_iterator ritr;
    for(ritr=vect.rbegin();ritr!=vect.rend();ritr++){
        cout<<*ritr<<" ";
    }
}