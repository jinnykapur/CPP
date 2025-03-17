#include <iostream>
using namespace std;
#define N 4

void printBoard(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool isSafe(int board[N][N], int row, int col) {
    // Check vertical column (previous rows only)
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 1) {
            return false;
        }
    }

    // Check upper left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    // Check upper right diagonal
    for (int i = row, j = col; i >= 0 && j < N; i--, j++) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    return true;
}

bool solveNQutil(int board[N][N], int row) {
    if (row == N) {  // Base case: all queens placed
        return true;
    }

    for (int col = 0; col < N; col++) {
        if (isSafe(board, row, col)) {
            board[row][col] = 1; // Place queen

            if (solveNQutil(board, row + 1)) {
                return true; // If placing the queen leads to a solution, return true
            }

            board[row][col] = 0; // Backtrack
        }
    }

    return false; // No valid position found in this row
}

bool solveNQ() {
    int board[N][N] = {0}; // Initialize board with 0s

    if (!solveNQutil(board, 0)) {
        cout << "Solution doesn't exist." << endl;
        return false;
    }

    printBoard(board);
    return true;
}

int main() {
    solveNQ();
    return 0;
}
