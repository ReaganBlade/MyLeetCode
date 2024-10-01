// 153. Find Minimum in Rotated Sorted Array
#include <bits/stdc++.h>
using namespace std;

// My Solution
// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int n = nums.size(); 
//         int low = 0, high = n - 1;
//         int aMin = INT_MAX;
//         if (nums[low] < nums[high] ){
//             return nums[low];
//         }

//         while(low <= high){
//             int mid = (low + high) / 2;
            
//             if (nums[low] <= nums[mid]){
//                 // cout << nums[low] << endl;
//                 aMin = min(aMin, nums[low]);
//                 low = mid + 1;
//             }
//             else {
//                 high = mid - 1;
//                 aMin = min(aMin, nums[low]);
//             }

//         }

//         return aMin;    
//     }
// };

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1;

        int result = INT_MAX;
        while(low <= high){
            int mid = (low + high) / 2;
            if (nums[low] <= nums[mid]){
                result = min(result, nums[low]);
                low = mid + 1;
            }
            else {
                high = mid - 1;
                result = min(result, nums[mid]);
            }
        }

        return result;
    }
};

int main(){
    Solution S;
    vector<int> numbers = {4,5,6,7,0,1,2};
    int result = S.findMin(numbers);

    cout << "Minimum is = " << result << endl;

    return 0;
}