// 3046. Split the array
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        if (nums.size() % 2 != 0) return false;
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++){
            if (mp[nums[i]] >= 2){
                return false;
            }
            mp[nums[i]]++;
        }

        return true;
    }
};