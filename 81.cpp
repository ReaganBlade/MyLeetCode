// 81. Search in Rotated Sorted Array II
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool search(vector<int> &nums, int target){
        int n = nums.size();

        int low = 0, high = n - 1;
        while (low <= high){
            int mid = (low + high) / 2;
            if (nums[mid] == target)
                return 1;

            if (nums[low] == nums[mid] && nums[mid] == nums[high]){
                low++;
                high--;
            }
            else{
                if (nums[low] <= nums[mid]){
                    if (nums[low] <= target && target <= nums[mid])
                        high = mid - 1;
                    else
                        low = mid + 1;
                }

                if (nums[mid] <= nums[high]){
                    if (nums[mid] <= target && target <= nums[high])
                        low = mid + 1;
                    else
                        high = mid - 1;
                }
            }
        }

        return false;
    }
};

int main()
{

    return 0;
}