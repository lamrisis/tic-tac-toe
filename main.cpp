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

 // Main game loop
 void playGame() {
    while (true) {
        displayBoard();
        int row, col;
        cout << "Player " << currentPlayer << ", enter row (0-2): ";
        cin >> row;
        cout << "Player " << currentPlayer << ", enter column (0-2): ";
        cin >> col;

        if (board[row][col] == ' ') {
            board[row][col] = currentPlayer;
            if (checkWin(currentPlayer)) {
                displayBoard();
                cout << "Player " << currentPlayer << " wins!" << endl;
                break;
            }
            currentPlayer = switchPlayer(currentPlayer);
        } else {
            cout << "That position is already taken. Try again." << endl;
        }
    }
}

