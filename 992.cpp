// Subarrays with K different Integers
#include <bits/stdc++.h>
using namespace std;

// Wrong Solution
// class Solution {
// public:
//     int subarraysWithKDistinct(vector<int>& nums, int k) {
//         int count = 0;
//         for (int i = 0; i < nums.size(); i++){
//             set<int> st;
//             for (int j = 0; j < nums.size(); j++){
//                 st.insert(nums[j]);
//                 if (st.size() <= k){
//                     count++;
//                 } else {
//                     break;
//                 }
//             }
//         }

//         return count;
//     }
// };

class Solution{
    int result(vector<int>& nums, int goal){
        unordered_map<int, int> mpp;

        int left = 0, count = 0;

        for (int right = 0; right < nums.size(); right++){
            mpp[nums[right]]++;

            while(mpp.size() > goal){
                mpp[nums[left]]--;
                if (mpp[nums[left]] == 0)
                    mpp.erase(nums[left]);
                left++;
            }

            count += (right - left + 1);
        }

        return count;
    }
public:
    int subarrayWithDistinct(vector<int>& nums, int k){
        return result(nums, k) - result(nums, k - 1);
    }
};

int main(){

    return 0;
}