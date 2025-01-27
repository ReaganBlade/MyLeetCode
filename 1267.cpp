// 1267. Count Servers that communicate
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countServers(vector<vector<int>> &grid)
    {
        int rowSize = grid.size(), colSize = grid[0].size();
        int communicableServersCount = 0;

        // Traverse through the grid
        for (int row = 0; row < rowSize; row++)
        {
            for (int col = 0; col < colSize; col++)
            {
                if (grid[row][col] == 1)
                {
                    bool canCommunicate = false;

                    for (int otherCol = 0; otherCol < colSize; otherCol++)
                    {
                        if (otherCol != col && grid[row][otherCol] == 1)
                        {
                            canCommunicate = true;
                            break;
                        }
                    }
                    if (canCommunicate)
                    {
                        communicableServersCount++;
                    } else {
                        for (int otherRow = 0; otherRow < rowSize; ++otherRow){
                            if (otherRow != row && grid[otherRow][col] == 1){
                                canCommunicate = true;
                                break;
                            }
                        }

                        if (canCommunicate){
                            communicableServersCount++;
                        }
                    }
                }
            }
        }

        return communicableServersCount;
    }
};

int main()
{

    return 0;
}