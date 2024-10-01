// 1. Two Sums
#include <bits/stdc++.h>
using namespace std;

// Brute force
// class Solution{
// public:
//     vector<int> twoSum(vector<int> nums, int target){
//         for( int i = 0; i < nums.size(); i++ ) {
//             for( int j = i; j < nums.size(); j++ ) {
//                 if (nums[i] == nums[j])
//                     continue;

//                 if (nums[i] + nums[j] == target)
//                     return {i, j};
//             }


//             return {-1};
//         }

//     }
// };

// Better Solution
// class Solution{
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         map<int, int> mpp;
//         for( int i = 0; i < nums.size(); i++ ){
//             int need = target - nums[i];
//             if( mpp.find(need) != mpp.end() )
//                 return {mpp[need], i};

//             mpp[nums[i]] = i;
//         }

//         return {-1, -1};
//     }
// };

// Optimal Solution
class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        sort(nums.begin(), nums.end());

        while(left < right){
            int sum = nums[left] + nums[right];
            if( sum == target )
                return {left, right};

            if( sum < target )
                left++;
            else
                right--;
        }

        return {-1, -1};
    }
};

int main(){

    return 0;
}