// #include <iostream>
// using namespace std;

// int toh(int n, int from, int to, int max){
//     int moves =0;
//     max=toh(n-1, from, max, to);
//     moves++;
//     moves+=toh(n-1, max, to, from);
//     return moves;
// }
// int main(){
//     int n;
//     cout<<"Enter the number of disks: ";
//     cin>>n;
//     cout<<"The number of moves required are: "<<toh(n, 1, 3, 2);
//     cout<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

void toh(int n, int from, int to, int aux, int &moves) {
    if (n == 0) return; // Base case

    toh(n - 1, from, aux, to, moves); // Move n-1 disks from 'from' to 'aux'
    cout << "Move disk " << n << " from rod " << from << " to rod " << to << endl;
    moves++; // Counting the move
    toh(n - 1, aux, to, from, moves); // Move n-1 disks from 'aux' to 'to'
}

int main() {
    int n, moves = 0;
    cout << "Enter the number of disks: ";
    cin >> n;
    
    toh(n, 1, 3, 2, moves);
    
    cout << "The number of moves required are: " << moves << endl;
    return 0;
}
