#include <iostream>
using namespace std;
#define N 4

#include <array>

void printBoard(int board[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
           cout<<board[i][j]<<" "; 
        }
        cout<<endl;
    }
}
bool isSafe(int board[N][N],int row, int col){
    //checks the position is safe for the queen or not
    int i,j;
    // //horizontal
    // for(int j=0;j<N;j++){
    //     if(board[row][j]==1){ 
    //         return false;
    //     }
    // }
    //vertical
    for(int i=0;i<row;i++){
        if(board[i][col]==1){
            return false;
        }
    }
    //left diagonal
    for(int i=row, j=col; i>=0 && j>=0; i--,j--){
        if(board[i][j]==1){
            return false;
        }
    }
    //right diagonal
    for(int i=row, j=col; i>=0 && j<N; i--,j++){
        if(board[i][j]==1){
            return false;
        }
    }
    return true;
    
}
bool solveNQutil(int board[N][N], int row){ //check whether solution is possible or not
    if(row==N){ //base & end conditon
        return true;
    }
    for(int j=0;j<N;j++){
        if(isSafe(board, row, j)){
            board[row][j]=1; //is true  (we can place queen)
            if(solveNQutil(board,row+1)){
                return true;
            }
            //backtrack 
            board[row][j]=0; //we can't place the queen there so go the next position 
            
        }
        
    }
    return false;
}
bool solveNQ(){  
    //declared N x N board 
    // with values '0'
    int board[N][N]={0};
   

    if(solveNQutil(board,0)==false){ //whether solution exists or not
        cout<<"Solution doesn't exist.";
        return false;
    }
    printBoard(board);
    return true;
}
int main(){
    solveNQ();
    return 0;
}

