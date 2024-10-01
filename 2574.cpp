// 2574. Left and Right Sum Differences
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> leftRightDifference(vector<int>& nums){
        int n = nums.size(), sum = 0;
        vector<int> result {n};

        for(int i = 0; i < n; i++){
            sum += nums[i];
        }

        int rightSum = sum;
        int leftSum = 0;
        for(int i = 0; i < n; i++){
            rightSum -= nums[i];
            result[i] = abs(leftSum - rightSum);
            leftSum += nums[i];
        }

        return result;
    }
};

int main(){
    Solution S;
    return 0;
}