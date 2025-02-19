// 2257. Count Unguarded Cells in the Grid
#include <bits/stdc++.h>
using namespace std;

/*
X-1 -> inaccessible
U0 -> accessible
G1 -> guard
W2 -> wall

*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
    void unguardedCell(int row, int col, vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();

        // Up
        for (int i = row - 1; i >= 0; i--) {
            if (grid[i][col] == 1 || grid[i][col] == 2) break;
            grid[i][col] = -1;
        }
        // Down
        for (int i = row + 1; i < m; i++) {
            if (grid[i][col] == 1 || grid[i][col] == 2) break;
            grid[i][col] = -1;
        }
        // Left
        for (int c = col - 1; c >= 0; c--) {
            if (grid[row][c] == 1 || grid[row][c] == 2) break;
            grid[row][c] = -1;
        }
        // Right
        for (int c = col + 1; c < n; c++) {
            if (grid[row][c] == 1 || grid[row][c] == 2) break;
            grid[row][c] = -1;
        }
    }

public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m, vector<int>(n, 0)); // Initialize all cells as unguarded (0)

        // Mark walls
        for (const auto& wall : walls) {
            grid[wall[0]][wall[1]] = 2; // Walls = 2
        }

        // Mark guards
        for (const auto& guard : guards) {
            grid[guard[0]][guard[1]] = 1; // Guards = 1
        }

        // Process guard visibility
        for (const auto& guard : guards) {
            unguardedCell(guard[0], guard[1], grid);
        }

        // Count unguarded cells
        int count = 0;
        for (const auto& row : grid) {
            for (const auto& cell : row) {
                if (cell == 0) count++; // Count unguarded, unoccupied cells
            }
        }
        return count;
    }
};



int main(){
    
    return 0;
}