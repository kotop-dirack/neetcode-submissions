class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if (!isRawValid(board) || !isColumnValid(board) || !isBoxValid(board)) {
            return false;
        }
        return true;
    }

   private:
    bool isRawValid(vector<vector<char>>& board) {
        unordered_map<char, int> ans;
        for (int i = 0; i < board.size(); i++) {
            int j = 0;
            while (j < board[i].size()) {
                if (board[i][j] != '.') {
                    ans[board[i][j]]++;
                    j++;
                } else {
                    j++;
                }
            }
            for (const auto& [key, val] : ans) {
                if (val > 1) {
                    return false;
                } else {
                    continue;
                }
            }
            ans.clear();
        }
        return true;
    }
    bool isColumnValid(vector<vector<char>>& board) {
        unordered_map<char, int> ans;
        for (int i = 0; i < board.size(); i++) {
            int j = 0;
            while (j < board.size()) {
                if (board[j][i] != '.') {
                    ans[board[j][i]]++;
                    j++;
                } else {
                    j++;
                }
            }
            for (const auto& [key, val] : ans) {
                if (val > 1) {
                    return false;
                } else {
                    continue;
                }
            }
            ans.clear();
        }
        return true;
    }
    bool isBoxValid(vector<vector<char>>& board) {
        for (int br = 0; br < 9; br += 3) {      // верхняя строка квадрата
            for (int bc = 0; bc < 9; bc += 3) {  // левый столбец квадрата
                unordered_set<char> seen;
                for (int i = br; i < br + 3; i++) {
                    for (int j = bc; j < bc + 3; j++) {
                        char c = board[i][j];
                        if (c == '.') continue;
                        if (!seen.insert(c).second) return false;
                    }
                }
            }
        }
        return true;
    }
};
