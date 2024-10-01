// 2367. Number of Arithmetic Triplets
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int, int> pairs;
        int result = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            pairs[nums[i]] = i;
        }

        for( int i = 0; i < n; i++ ){
            if(pairs.count(nums[i] + diff) && pairs.count(nums[i] + (2*diff)))
                result++;
        }

        return result;
    }
};