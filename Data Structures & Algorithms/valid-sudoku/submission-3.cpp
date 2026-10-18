class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if (isRawValid(board) && isColumnValid(board) && isBoxValid(board)){
            return true;
        }
        return false;
    }
private:
    bool isRawValid(vector<vector<char>>& board){
        for (int i = 0; i<board.size();i++){
            unordered_map<char,int>hash;
            for (int j = 0; j<board[i].size();j++){
                if (board[i][j] != '.'){
                    hash[board[i][j]]++;
                }
            }
            for (const auto [key,val] : hash){
                if (val > 1){
                    return false;
                }
            }
        }
        return true;
    }
    bool isColumnValid(vector<vector<char>>& board){
        for (int i = 0; i<board.size();i++){
            unordered_map<char,int>hash;
            for (int j = 0; j<board[i].size();j++){
                if (board[j][i] != '.'){
                    hash[board[j][i]]++;
                }
            }
            for (const auto [key,val] : hash){
                if (val > 1){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBoxValid(vector<vector<char>>& board){
        for (int ki = 0; ki<board.size();ki+=3){
            for (int kj = 0; kj<board.size();kj+=3){
                unordered_map<char,int>hash;
                for (int i = ki; i<ki+3;i++){
                    for (int j = kj ; j<kj+3;j++){
                        if (board[i][j] != '.'){
                            hash[board[i][j]]++;
                        }
                    }
                }
                for (const auto [key,val] : hash){
                    if (val>1){
                        return false;
                    }
                }
                hash.clear();
            }
        }
        return true;
    }
};
