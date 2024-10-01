// 78. Subsets
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        int subsets = 1 << nums.size();

        for(int i = 0; i < subsets - 1; i++){
            vector<int> temp;
            for( int j = 0; j < nums.size() - 1; j++){
                if (i && (1 << j))
                    temp.push_back(nums[i]);
            }

            result.push_back(temp);
        }

        return result;
    }
};