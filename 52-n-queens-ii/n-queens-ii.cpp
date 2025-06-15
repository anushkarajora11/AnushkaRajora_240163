class Solution {
public:
    int totalNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        int count = 0;
        solve(0, n, board, count);
        return count;
    }

    int isSafe(int row, int col, int n, vector<string>& board) {
        for (int i = 0; i < row; ++i)
            if (board[i][col] == 'Q') return 0;

        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j)
            if (board[i][j] == 'Q') return 0;

        for (int i = row - 1, j = col + 1; i >= 0 && j < n; --i, ++j)
            if (board[i][j] == 'Q') return 0;

        return 1;
    }

    void solve(int row, int n, vector<string>& board, int& count) {
        if (row == n) {
            count++;
            return;
        }

        for (int col = 0; col < n; ++col) {
            if (isSafe(row, col, n, board)) {
                board[row][col] = 'Q';
                solve(row + 1, n, board, count);
                board[row][col] = '.';
            }
        }
    }
};
