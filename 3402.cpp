// 3402. Minimum Operations to Make Columns Strictly Increasing
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumOperations(vector<vector<int>> &grid)
    {
        if (grid.size() <= 1){
            return 0;
        }

        int ans = 0;
        
        for (int i = 0; i < grid[0].size(); i++)
        {
            int prev = 0;
            for (int j = 0; j < grid.size(); j++)
            {
                int x = grid[j][i];
                if (x <= prev)
                {
                    int temp = prev - x + 1;
                    ans += temp;
                    prev = prev + 1;
                }
                else
                {
                    prev = x;
                }
            }
        }

        return ans;
    }
};

int main()
{

    return 0;
}