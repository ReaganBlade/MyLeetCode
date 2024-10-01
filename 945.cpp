// 945> Minimum Increment to Make Array Unique
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        if (nums.size() <= 1){
            return 0;
        }
        vector<int> temp = nums;
        int result = 0;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++){
            while(nums[i-1] >= nums[i]){
                nums[i]++;
                result++;
            }
        }

        return result;
    }
};

int main(){

    return 0;
}