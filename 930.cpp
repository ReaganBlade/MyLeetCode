// 930. Binary Subarrays with Sum
#include <bits/stdc++.h>
using namespace std;

// class Solution{
// public:
//     int numSubarraysWithSum(vector<int>& nums, int goal){
//         int result = 0;

//         int l = 0, curSum = 0;
//         for (int r = 0; r < nums.size(); r++){
//             while(curSum > goal){
//                 curSum =- nums[l];
//                 l++;
//             }

//             curSum += nums[r];
//             if (curSum == goal){
//                 result++;
//             }
//         }

//         return result;
//     }
// };

class Solution{
public:
    int numSubarraysWithSum(vector<int>& nums, int goal){
        if (goal < 0) return 0;
        int result;
        int curSum = 0, l = 0;

        for (int r = 0; r <= nums.size(); r++){
            curSum += nums[r];

            while(curSum > goal){
                curSum -= nums[l];
                l++;
            }

            result = result + (r - l + 1);
        }

        return result;
    }
};

int main(){

    return 0;
}