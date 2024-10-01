// 239. Sliding Window maximum
#include <bits/stdc++.h>
using namespace std;

// Optimal Solution
// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         deque<int> dq;
//         vector<int> result;

//         for (int i = 0; i < nums.size(); i++){
//             if (!dq.empty() && dq.front() == i - k) dq.pop_front();

//             while(!dq.empty() && nums[dq.back()] <= nums[i])
//                 dq.pop_back();

//             dq.push_back(i);
//             if (i >= k - 1) result.push_back(nums[dq.front()]); 
//         }
        
//         return result;
//     }
// };


// Brute Force Solution
// class Solution{
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k){
        
//         vector<int> result;

//         for (int i = 0; i < nums.size() - k; i++){
//             int max_ = INT_MIN;
//             for (int j = i; j < i + k; j++){
//                 (nums[j] > max_) ? max_ = nums[j] : 0;
//             }
//             result.push_back(max_);
//         }

//         return result;
//     }
// };

// Optimal Solution
class Solution{
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k){
        deque<int> dq;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++){
            if (!dq.empty() && dq.front() == i - k)
                dq.pop_front();

            while(!dq.empty() && nums[dq.back()] < nums[i]){
                dq.pop_back();
            }

            dq.push_back(i);
            if (i >= k - 1)  result.push_back(nums[dq.front()]);
        }

        return result;
    }
};

int main(){

    return 0;
}