// 3034. Number of Subarrays That Match a Pattern 1
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        int n = nums.size(), m = pattern.size();
        int count = 0;

        for (int i = 0; i <= n - m - 1; i++){
            bool isMatch = true;
            for (int k = 0; k < m; k++){
                if (pattern[k] == 1 && nums[i + k + 1] <= nums[i + k]){
                    isMatch = false;
                    break;
                } else if (pattern[k] == 0 && nums[i + k + 1] != nums[i + k]) {
                    isMatch = false;
                    break;
                } else if (pattern[k] == -1 && nums[i + k + 1] >= nums[i + k]) {
                    isMatch = false;
                    break;
                }
            }
            if (isMatch) count++;
        }

        return count;
    }
};

int main(){

    return 0;
}