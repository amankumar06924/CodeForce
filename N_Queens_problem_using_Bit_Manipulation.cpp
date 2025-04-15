#include <iostream>
#include <vector>
using namespace std;

void solve(int row, int n, int cols, int ndiag, int rdiag, vector<string>& board, vector<vector<string>>& ans) {
    if (row == n) {
        ans.push_back(board);
        return;
    }

    for (int col = 0; col < n; col++) {
        if ((cols & (1 << col)) == 0 && (ndiag & (1 << (row + col))) == 0 && (rdiag & (1 << (row - col + n - 1))) == 0) {
            board[row][col] = 'Q';
            cols ^= (1 << col);
            ndiag ^= (1 << (row + col));
            rdiag ^= (1 << (row - col + n - 1));

            solve(row + 1, n, cols, ndiag, rdiag, board, ans);

            board[row][col] = '.';
            cols ^= (1 << col);
            ndiag ^= (1 << (row + col));
            rdiag ^= (1 << (row - col + n - 1));
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> ans;
    vector<string> board(n, string(n, '.'));
    solve(0, n, 0, 0, 0, board, ans);
    return ans;
}

int main() {
    int n;
    cout << "Enter the size of the board (N): ";
    cin >> n;

    vector<vector<string>> solutions = solveNQueens(n);
    cout << "Total solutions: " << solutions.size() << endl;

    for (auto& sol : solutions) {
        for (auto& row : sol) {
            cout << row << endl;
        }
        cout << endl;
    }

    return 0;
}
