// 36. Valid Sudoku
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, vector<int>> m, m_row, m_col;
        int count;

        vector<int> v(9, 0);

        for (int i = 0; i < 9; i++){
            if (i < 3) count = 0;

            else if (i > 2 && i < 6) count = 3;
            else if (i >= 6) count = 6;

            for (int j = 0; j < 9; j++){
                m_row[i] = v;
                m_col[j] = v;

                m[count + j/3] = v;
            }
            count = 0;
        }

        for (int i = 0; i < 9; i++){
            if (i < 3)
                count = 0;
            else if (i > 2 && i < 6)
                count = 3;
            else if (i >= 6)
                count = 6;
            
            for (int j = 0; j < 9; j++){
                if (board[i][j] >= '1' && board[i][j] <= '9'){
                    int x = (board[i][j] - '0') - 1;
                    if (m_row[i][x] == 1 || m_col[j][x] == 1 || m[count + j/3][x] == 1)
                        return false;
                    
                    m_row[i][x]++;
                    m_col[j][x]++;
                    m[count + j/3][x]++;
                }
            }
            count = 0;
        }
        return true;
    }
};

int main(){

    return 0;
}