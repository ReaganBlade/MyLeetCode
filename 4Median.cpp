// 4. Median of Two Sorted Arrays
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        int n = nums1.size();
        cout << n << endl;
        float res = 0;

        if (n % 2 == 0){
            // cout << nums1[n/2] << " " << nums1[n/2 - 1] << endl;
            // res = (nums1[n/2] + nums1[n/2 - 1]) / 2;
            // cout << res  << endl;

            return (double)(nums1[n/2] + nums1[n/2 - 1]) / 2;
        } else {

            // cout << nums1[n/2] << endl;
            return (double)(nums1[n/2]);
        }

    }
};

int main(){
    vector<int> n1 = {1, 2};
    vector<int> n2 = {3, 4};

    // nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    // sort(nums1.begin(), nums1.end());

    // for(auto i: nums1){
    //     cout << i << endl;
    // }

    Solution s;
    s = Solution();
    s.findMedianSortedArrays(n1, n2);

    return 0;
}