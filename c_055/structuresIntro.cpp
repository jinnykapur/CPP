
/*
    Structures:
    Structures is a collection of different variables of different datatype
    (just opposite of array).
    It also have a local and global scope i.e. if we define a structure outside the main, 
    then we can use it at any point of program.
    
*/

#include <iostream>
#include <array>
#include <string>
using namespace std;

struct student{
        int rollNo;
        char gender;
    }anil, jinny; //Anil & Jinny are Global variables of a Structure.

int main()
{
    student mayank={55,'m'}; //Here we define a structure variable locally 
    //and assigned the value of the structure in {curly brackets}.
    anil.rollNo=33;
    anil.gender='m';
    jinny.rollNo=62;
    jinny.gender='f';
    cout<<mayank.rollNo<<endl;
    cout<<mayank.gender<<endl;
    cout<<anil.rollNo<<endl;
    cout<<anil.gender<<endl;
    cout<<jinny.rollNo<<endl;
    cout<<jinny.gender<<endl;
    
}