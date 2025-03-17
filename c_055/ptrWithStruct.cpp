/*


*/

#include <iostream>
#include <array>

using namespace std;

struct student{
        int rollNo;
        char gender;
    };
    
int main()
{
   student jinny; //student acts like a DATATYPE and jinny is a student variable.
    student *jinnyPtr; //define structure student pointer
    jinnyPtr=&jinny;
    jinnyPtr->rollNo=50; // it is same as writing jinny.rollNo=50;
    jinnyPtr->gender='f';
    cout<<jinnyPtr->rollNo<<endl;
    cout<<jinnyPtr->gender<<endl;
    
     
    
}