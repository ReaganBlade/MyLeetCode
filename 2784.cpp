// 2784. Check if Array is Good
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isGood(vector<int>& nums) {

        if (nums.size() < 2) return false;

        int n = nums.size() - 1;
        sort(nums.begin(), nums.end());

        if (nums[n] != nums[n - 1] || nums[n] != n) {
            return false;
        }

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] != i + 1) {
                return false;
            }
        }

        return true;
    }
};


int main()
{

    return 0;
}