// 35. Search Insert Position
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int searchInsert(vector<int>& nums, int target){
        int low = 0, high = nums.size() - 1;
        int mid = 0;
        while(low <= high){
            mid = (low + high) / 2;
            if ( target == nums[mid] )
                return mid;

            if ( target < nums[mid] ){
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return high + 1;
    }
};


int main(){

    return 0;
}