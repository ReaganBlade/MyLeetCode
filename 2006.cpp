// 2006. Count Number of Pairs With Absolute Difference K
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int c = 0;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++){
            if (nums[n-1] - nums[i] >= k){
                auto range = equal_range(nums.begin(), nums.end(), nums[i] + k);
                c += distance(range.first, range.second);
            }
        }

        return c;
    }
};

int main() {
    vector<int> nums1 = {1, 2, 2, 1};
    int k1 = 1;
    cout << "Example 1 Output: " << countKDifference(nums1, k1) << endl;

    vector<int> nums2 = {1, 3};
    int k2 = 3;
    cout << "Example 2 Output: " << countKDifference(nums2, k2) << endl;

    return 0;
}
