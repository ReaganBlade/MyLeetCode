// 303. Range Sum Query - Immutable
#include <bits/stdc++.h>
using namespace std;


class NumArray {
    vector<long long> num_arr;
public:
    NumArray(vector<int>& nums) {
        num_arr.resize(nums.size());
        num_arr[0] = nums[0];
        for (int i = 1; i < nums.size(); i++){
            num_arr[i] = num_arr[i-1] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return left == 0 ? num_arr[right] : num_arr[right] - num_arr[left - 1];
    }
};
