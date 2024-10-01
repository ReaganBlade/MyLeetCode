// 2956. Find Common Elements between Two Arrays
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result(2, 0);

        for(int i = 0; i < nums1.size(); i++){
            auto it = find(nums2.begin(), nums2.end(), nums1[i]);
            if(it != nums2.end())
                result[0] += 1;
        }

        for(int i = 0; i < nums2.size(); i++){
            auto it = find(nums1.begin(), nums1.end(), nums2[i]);
            if(it != nums1.end())
                result[1] += 1;
        }

        return result;
    }
};