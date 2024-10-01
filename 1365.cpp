// 1365. How Many Numbers Are Smaller Than the Current Number
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> counts (nums.size(), 0);
        unordered_map<int, int> hashMap;

        vector<int> sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end());

        for(int i = 0; i < sortedNums.size(); i++){
            if(hashMap.find(sortedNums[i]) == hashMap.end()){
                hashMap[sortedNums[i]] = i;
            }
        }

        for(int i = 0; i < nums.size(); i++){
            counts[i] = hashMap[nums[i]];
        }

        return counts;
    }
};