// 26. Remove Duplicates from Sorted Array
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int removeDuplicates(vector<int> & nums){
        int n = nums.size();
        int res = 1;

        for(int i = 1; i < n; i++){
            if (nums[i] != nums[i-1]){
                nums[res] = nums[i];
                res++;
            }
        }

        return res;
    }
};

int main(){

    return 0;
}