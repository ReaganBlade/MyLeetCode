// 2661. First Completely Painted Row or Column
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        // Step 1: Create a hashmap of <value -> int, <row -> int, col -> int>>
        int rowSize = mat.size(), colSize = mat[0].size();
        map<int, pair<int, int>> matMap;
        for (int row = 0; row < rowSize; row++) {
            for (int col = 0; col < colSize; col++) {
                matMap[mat[row][col]] = {row, col};
            }
        }
        
        // initiate two new maps -> rowMap and colMap
        map<int, int> rowMap, colMap;
        
        // traverse through arr and increment row and col according to the hashmap
        int count = 0;
        for (auto i: arr) {
            int row = matMap[i].first;
            int col = matMap[i].second;
            rowMap[row]++;
            colMap[col]++;
            count++;
            
            // if rowMap == colSize or colMap = rowSize return current arr value
            if (rowMap[row] == colSize || colMap[col] == rowSize) {
                return count-1;
            }
        }
        return count;
    }
};

// better solution
class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        map<int, pair<int, int>> pos;
        vector<int> row(m), col(n);
        
        // Store positions of each number
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                pos[mat[i][j]] = {i, j};
            }
        }
        
        // Process array
        for (int idx = 0; idx < arr.size(); idx++) {
            auto [i, j] = pos[arr[idx]];
            row[i]++;
            col[j]++;
            
            // Check if this completes any row or column
            if (row[i] == n || col[j] == m) {
                return idx;
            }
        }
        
        return arr.size() - 1;
    }
};

int main(){

    return 0;
}