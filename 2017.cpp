// 2017. The Grid Game
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long min_result = LLONG_MAX;
        long long preRow1 = accumulate(grid[0].begin(), grid[0].end(), 0LL);
        long long preRow2 = 0;

        for (int i = 0; i < grid[0].size(); ++i) {
            preRow1 -= grid[0][i];
            min_result = min(min_result, max(preRow1, preRow2));
            preRow2 += grid[1][i];
        }

        return min_result;
    }
};

int main(){

    return 0;
}