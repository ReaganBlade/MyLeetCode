// 88. Merge Sorted Array
#include <bits/stdc++.h>
using namespace std;

// Optimized Solution
// class Solution{
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
//         int left = n - 1;
//         int right = 0;

//         while(left >= 0 && right < m){
//             if (nums1[left] > nums1[right]){
//                 swap(nums1[left], nums2[right]);
//                 left--; right++;
//             }
//             else{
//                 break;
//             }
//         }
//         sort(nums1.begin(), nums1.end());
//         sort(nums2.begin(), nums2.end());
//     }
// };

class Solution{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        int x = m + n;
        for(int i = m; i < m + n; i++){
            nums1[i] = nums2[i - m];

        }

        sort(nums1.begin(), nums1.end());
    }
};

int main(){

    return 0;
}