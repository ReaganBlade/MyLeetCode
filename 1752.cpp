// 1752. Check if Array is Sorted and Rotated
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool check(vector<int>& nums){

        int c = 0;
        int n = nums.size();

        for( int i = 0; i < nums.size() - 1; i++ ){
            if (nums[i] > nums[i+1])
                c++;
        }

        if ( c == 1 && nums[0] >= nums[n-1])
            return true;
        
        if (c == 0)
            return true;
        else
            return false;
    }
};

int main(){

    return 0;
}