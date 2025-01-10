// 2022. Convert 1D Array Into 2D array
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int ptr = 0;
        vector<vector<int>> result;
        if (m*n != original.size()){
            return result;
        }

        for (int row = 0; row < m; row++){
            for (int col = 0; col < n; col++){
                result[row].emplace_back(original[ptr]);
                ptr++;
            }
        }

        return result;
    }
};

int main(){

    return 0;
}