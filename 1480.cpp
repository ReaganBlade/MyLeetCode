// 1480. Running Sum of 1d Array
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        for ( int i = 1; i < n; i++ ){
            nums[i] = nums[i] + nums[i - 1];
        }

        return nums;
    }
};

int main(){

    Solution s;
    vector<int> num = {1,2,3,4};
    vector<int> result = s.runningSum(num);

    for (auto i : result){
        cout << i << " ";
    }

    return 0;
}