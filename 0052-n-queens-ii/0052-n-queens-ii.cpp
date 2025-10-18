class Solution {
public:
    bool canPlace(int row, int col, vector<string>& board, int n) {
        // check column
        for (int i = 0; i < row; i++)
            if (board[i][col] == 'Q')
                return false;

        // check upper left diagonal
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
            if (board[i][j] == 'Q')
                return false;

        // check upper right diagonal
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
            if (board[i][j] == 'Q')
                return false;

        return true;
    }

    void solve(int row, int n, vector<string>& board,
               vector<vector<string>>& answer) {
        if (row == n) {
            answer.push_back(board);
            return;
        }

        for (int col = 0; col < n; col++) {
            if (canPlace(row, col, board, n)) {
                board[row][col] = 'Q';
                solve(row + 1, n, board, answer);
                board[row][col] = '.';
            }
        }
    }

    int totalNQueens(int n) {
        vector<vector<string>> answer;
        vector<string> board(n, string(n, '.'));
        solve(0, n, board, answer);
        return answer.size();
    }
};