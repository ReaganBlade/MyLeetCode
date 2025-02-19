// 164. Maximum Gap
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if (nums.size() < 2){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int max_diff = INT_MIN;
        for (int i = 1; i < nums.size(); i++){
            int diff = nums[i] - nums[i-1];
            if (diff > max_diff) max_diff = diff;
        }

        return max_diff;
    }
};

int main(){

    return 0;
}