// 152. Maximum Product Subarray
#include <bits/stdc++.h>
using namespace std;

// class Solution{
// public:
//     int maxProduct(vector<int>& nums){
//         int prefix = 1, suffix = 1;
//         int maxSum = INT_MIN;
//         int n = nums.size();
//         for( int i = 0; i < n - 1; i++){
//             if (prefix == 0){
//                 prefix = 1;
//             }
//             if(suffix == 0){
//                 suffix = 1;
//             }

//             prefix *= nums[i];
//             suffix *= nums[n - 1 - i];

//             maxSum = max(maxSum, max(prefix, suffix));
//         }

//         return maxSum;
//     }
// };

class Solution{
public:
    int maxProduct(vector<int>& nums){
        int n = nums.size();

        int pre = 1, suff = 1;
        int ans = INT_MIN;

        for(int i = 0; i < n; i++){
            if (pre == 0) pre = 1;
            if (suff == 0) suff = 1;

            pre *= nums[i];
            suff *= nums[n - i - 1];
            ans = max(ans, max(pre, suff));
        }

        return ans;
    }
};

int main(){
    Solution S;


    return 0;
}