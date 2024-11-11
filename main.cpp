#include <iostream>

using namespace std;

char board[3][3]; // 3x3 game board

// Initialize the game board with empty spaces
void initBoard() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = ' ';
        }
    }
}

int main() {
    initBoard(); // Initialize the game board
    return 0;
}



// Function to display the game board
void displayBoard() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j];
            if (j < 2) {
                cout << "|";
            }
        }
        cout << endl;
        if (i < 2) {
            cout << "-----" << endl;
        }
    }
}



// Function to switch players
char switchPlayer(char currentPlayer) {
    return (currentPlayer == 'X') ? 'O' : 'X';
}