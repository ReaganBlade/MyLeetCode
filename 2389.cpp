// 2389. Longest Subsequence With Limited Sum
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries){
        vector<int> result;
        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++){
            nums[i] += nums[i - 1];
        }

        for (auto a: queries){
            result.push_back(upper_bound(nums.begin(), nums.end(), a) - nums.begin());
        }

        return result;
    }
};


int main(){

    return 0;
}