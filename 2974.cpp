// 2974. Minimum Number Game
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> result(n);
        for (int i = 1; i < n; i+=2 ){
            result[i] = nums[i-1];
            result[i-1] = nums[i];
        }

        return result;
    }
};

int main(){

    return 0;
}