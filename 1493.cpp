// 1493. Longest Subarray of 1's After Deleting One Element
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int longestSubarray(vector<int>& nums){
        int l = 0, r = 0, maxLen = 0, zeroes = 0;

        while(r < nums.size()){
            if (nums[r] == 0) zeroes++;

            if (zeroes > 1){
                if (nums[l] == 0) zeroes--;
                l++;
            }

            if (zeroes == 1){
                maxLen = max(maxLen, r - l + 1);
            }
            r++;
        }

        if (zeroes == 0)
            return nums.size() - 1;
        
        return maxLen;
    }
};

int main(){

    return 0;
}