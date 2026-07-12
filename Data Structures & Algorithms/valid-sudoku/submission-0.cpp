class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
                for (int i = 0; i < board.size(); i++) {
            unordered_map<char, int> roww;
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] != '.') {
                    roww[board[i][j]]++;
                    if (roww[board[i][j]] > 1)
                        return false;
                }
            }
        }

        for (int i = 0; i < board.size(); i++) {
            unordered_map<char, int> coll;
            for (int j = 0; j < board[i].size(); j++) {
                if (board[j][i] != '.') {
                    coll[board[j][i]]++;
                    if (coll[board[j][i]] > 1)
                        return false;
                }
            }
        }

        for (int i = 0; i < 9; i++) {
            unordered_map<char, int> valid;
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    int row = ((i / 3) * 3) + j;
                    int col = ((i % 3) * 3) + k;
                    if (board[row][col] != '.') {
                        valid[board[row][col]]++;
                        if (valid[board[row][col]] > 1)
                            return false;
                    }
                }
            }
        }
        return true;
    }
};
