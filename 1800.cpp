// 1800. Maximum Ascending Subarray Sum
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = INT_MIN;
        int curSum = nums[0];
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] > nums[i-1]){
                curSum += nums[i];
            } else {
                curSum = nums[i];
            }

            maxSum = max(maxSum, curSum);
        }

        return maxSum;
    }
};

int main(){

}