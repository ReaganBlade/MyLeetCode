// 1913. Maximum Product Difference Between Two Pairs
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int diff = (nums[n-1] * nums[n - 2]) - (nums[0] * nums[1]);

        return diff;
    }
};

int main(){

    Solution s;

    vector<int> num = {4,2,5,9,7,4,8};
    int result = s.maxProductDifference(num);

    cout << result << endl;

    return 0;
}