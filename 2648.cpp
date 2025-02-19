// 2684. Maximum Number of Moves in a Grid
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int maxMoves(vector<vector<int>>& grid){
        int row = 0, col = 0;
        int rowSize = grid.size(), colSize = grid[0].size();
        int res = 0;
        while(row < rowSize && col < colSize){
            int up = (row > 0) ? grid[row - 1][col + 1]: 0;
            int right = grid[row][col + 1];
            int down = grid[row + 1][col + 1];

            if (up >= right && up >= down){
                row -= 1, col += 1;
            } else if (right >= up && right >= down){
                col += 1;
            } else {
                row += 1, col += 1;
            }
            res++;
        }

        return res;
    }
};


int main(){

    return 0;
}