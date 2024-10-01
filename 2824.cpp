// 2824. Count Pairs Whose Sum is Less than Target
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        sort(nums.begin(), nums.end());
        int l = 0, r = nums.size() - 1;
        while(l < r){
            if (nums[l] + nums[r] < target){
                count += r-l;
                l++;
            } else {
                r--;
            }
        }

        return count;
    }
};

int main(){

    Solution S;

    vector<int> numbers = {-6,2,5,-2,-7,-1,3};
    int t = -2;

    int result = S.countPairs(numbers, t);

    cout << result;

    return 0;
}