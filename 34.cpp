// 34. Find first and Last position of element in sorted array
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> searchRange(vector<int>& nums, int target){
        int first = -1, last = -1;
        int n = nums.size();

        for( int i = 0; i < n; i++ ) {
            if (first == -1 && nums[i] == target){
                first = i;
                last = i;
            }
            else if (nums[i] == target)
                last = i;
        }

        return {first, last};
    }
};

int main(){

    return 0;
}