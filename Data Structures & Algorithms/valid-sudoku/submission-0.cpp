class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_set<int> mp;
            for (int j=0;j<9 ; j++)
            {
                if(board[i][j] == '.')
                {
                    continue;
                }
                if(mp.find(board[i][j]) != mp.end())
                {
                    return false;
                }
                mp.insert(board[i][j]);
            }
        }
        for(int i=0;i<9;i++){
            unordered_set<int> mp;
            for (int j=0;j<9 ; j++)
            {
                if(board[j][i] == '.')
                {
                    continue;
                }
                if(mp.find(board[j][i]) != mp.end())
                {
                    return false;
                }
                mp.insert(board[j][i]);
            }
        }

        for (int boxRow = 0; boxRow < 9; boxRow += 3) {
            for (int boxCol = 0; boxCol < 9; boxCol += 3) {
                unordered_set<int> mp;
                 // Now iterate inside this 3x3 box
                for (int i = boxRow; i < boxRow + 3; i++) {
                    for (int j = boxCol; j < boxCol + 3; j++) {
                        if(board[i][j] == '.')
                        {
                            continue;
                        }
                        if(mp.find(board[i][j]) != mp.end())
                        {
                            return false;
                        }
                        mp.insert(board[i][j]);
                    }
                }
    
            }
        }
        return true;
    }
};
