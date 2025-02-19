// 3105. Longest strictly Increasing or Strictly Decreasing Subarray
#include <bits/stdc++.h>
using namespace std;


// Brute Force Solution
/*

class Solution{
public:
    int longestMonotonicSubarray(vector<int>& nums){
        int max_len = 0;
        for (int i = 0; i < nums.size(); i++){
            int curLen = 1;
            for (int pos = i+1; pos < nums.size(); pos++){
                if (nums[pos] > nums[pos - 1]) curLen++;
                else break;
            }

            max_len = max(max_len, curLen);
        }

        for (int i = 0; i < nums.size(); i++){
            int curLen = 1;
            for (int pos = i+1; pos < nums.size(); pos++){
                if (nums[pos] < nums[pos - 1]) curLen++;
                else break;
            }

            max_len = max(max_len, curLen);
        }

        return max_len;
    }
};
*/

// Optimal Solution
class Solution{
public:
    
};

int main(){

    return 0;
}