class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); i++) {
            set<char> st;
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == '.') continue;
                if (st.find(board[i][j]) != st.end()) return false;
                st.insert(board[i][j]);
            }
        }

        for (int i = 0; i < board.size(); i++) {
            set<char> st;
            for (int j = 0; j < board[0].size(); j++) {
                if (board[j][i] == '.') continue;
                if (st.find(board[j][i]) != st.end()) return false;
                st.insert(board[j][i]);
            }
        }

        for (int i = 0; i < 9; i += 3) {
            int sr = i;
            int er = i + 2;
            for (int j = 0; j < 9; j += 3) {
                int sc = j;
                int ec = j + 2;
                if (validMatrix(board, sr, er, sc, ec) == false) return false;
            }
        }

        return true;
    }

    bool validMatrix(vector<vector<char>>& board, int sr, int er, int sc, int ec) {
        unordered_set<char> st;
        for (int m = sr; m <= er; m++) {
            for (int n = sc; n <= ec; n++) {
                if (board[m][n] == '.') continue;
                if (st.find(board[m][n]) != st.end()) {
                    return false;
                }
                st.insert(board[m][n]);
            }
        }
        return true;
    }
};
