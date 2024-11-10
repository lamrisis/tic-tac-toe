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