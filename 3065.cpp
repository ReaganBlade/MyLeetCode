// Minimum Operations to Exceeed Threshold Value
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int minOperations(vector<int>& nums, int k){
        int ops = 0;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] < k)
                ops++;
        }

        return ops;
    }
};

int main(){


    return 0;
}