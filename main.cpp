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
    initBoard(); // Initialize the game board1
    playGame();
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






  // Function to check for a win condition

bool checkWin(char player) {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true; // Check rows
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true; // Check columns
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true; // Check diagonal
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true; // Check diagonal
    }
    return false;
}


// Function to switch players

char switchPlayer(char currentPlayer){
    return (currentPlayer == 'X')?'O':'X';
}

 // Main game loop

 void playGame() {
    while (true) {
        displayBoard();
        int row, col;
        cout << "Players " << currentPlayer << ", enter row (0-2): ";
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

