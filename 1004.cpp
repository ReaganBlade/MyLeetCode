// 1004. Max Consecutive Ones III
#include <bits/stdc++.h>
using namespace std;

// Brute Force Solution
// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         int maxLength = INT_MIN;
//         for (int i = 0; i < nums.size(); i++){
//             int zeroes = 0;
//             int len = 0;
//             for (int j = i; j < nums.size(); j++){
//                 if(nums[j] == 0)
//                     zeroes++;
                
//                 if (zeroes > k)
//                     break;
//                 else{
//                     len++;
//                 }
//             }

//             maxLength = max(maxLength, len);
//         }

//         return maxLength;
//     }
// };


// Using Sliding Window Technique
// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         int maxLength = 0;
//         int zeroes = 0, l = 0;
//         for (int i = 0; i < nums.size(); i++){
//             if(nums[i] == 0){
//                 zeroes++;
//             }

//             while(zeroes > k){
//                 if (nums[l] == 0)
//                     zeroes--;
//                 l++;
//             }

//             maxLength = max(maxLength, i - l + 1);
//         }

//         return maxLength;
//     }
// };

// Using sliding window Optimal
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0, r = 0, maxLength = 0, zeroes = 0;

        while (r < nums.size()){
            if (nums[r] == 0)
                zeroes++;

            if (zeroes > k){
                if (nums[l] == 0){
                    zeroes--;
                }
                l++;
            }

            if (zeroes <= k){
                maxLength = max(maxLength, r - l + 1);
            }
            r++;
        }

        return maxLength;
    }
};

int main(){
    return 0;
}
