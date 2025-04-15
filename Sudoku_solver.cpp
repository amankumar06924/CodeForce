#include <iostream>
#include <vector>

using namespace std;

void display(vector<vector<int>>& board) {
    for (const auto& row : board) {
        for (int num : row)
            cout << num << " ";
        cout << endl;
    }
}

void solveSudoku(vector<vector<int>>& board, vector<int>& rows, vector<int>& cols, vector<vector<int>>& grid, int i = 0, int j = 0) {
    if (i == 9) {
        display(board);
        return;
    }

    int nextI = (j == 8) ? i + 1 : i;
    int nextJ = (j == 8) ? 0 : j + 1;

    if (board[i][j] > 0) {
        solveSudoku(board, rows, cols, grid, nextI, nextJ);
    } else {
        for (int num = 1; num <= 9; num++) {
            int bit = (1 << num);
            if (!(rows[i] & bit) && !(cols[j] & bit) && !(grid[i / 3][j / 3] & bit)) {
                board[i][j] = num;
                rows[i] ^= bit;
                cols[j] ^= bit;
                grid[i / 3][j / 3] ^= bit;

                solveSudoku(board, rows, cols, grid, nextI, nextJ);

                grid[i / 3][j / 3] ^= bit;
                cols[j] ^= bit;
                rows[i] ^= bit;
                board[i][j] = 0;
            }
        }
    }
}

int main() {
    vector<vector<int>> board(9, vector<int>(9, 0));

    cout << "Enter the Sudoku grid (use 0 for empty cells):\n";
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            cin >> board[i][j];

    vector<int> rows(9, 0), cols(9, 0);
    vector<vector<int>> grid(3, vector<int>(3, 0));

    // Initialize bit masks
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (board[i][j] > 0) {
                int num = board[i][j];
                int bit = (1 << num);
                rows[i] |= bit;
                cols[j] |= bit;
                grid[i / 3][j / 3] |= bit;
            }
        }
    }

    cout << "Solving Sudoku...\n";
    solveSudoku(board, rows, cols, grid);

    return 0;
}
