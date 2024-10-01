// 
#include <bits/stdc++.h>
using namespace std;

vector<int> RearrangebySign(vector<int> A, int n){
    vector<int> pos;
    vector<int> neg;

    for(int i = 0; i < n; i++){
        if (A[i] > 0) pos.push_back(A[i]);
        else neg.push_back(A[i]);
    }

    for(int i = 0; i < n/2; i++){
        A[2*i] = pos[i];
        A[2*i+1] = neg[i];
    }

    return A;

}

class Solution{
public:
    vector<int> rearrangeArray(vector<int>& nums){
        int n = nums.size();

        vector<int> pos;
        vector<int> neg;

        for(int i = 0; i < n; i++){
            if (nums[i] > 0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }

        for(int i = 0; i < n/2; i++){
            nums[2*i] = pos[i];
            nums[2*i+1] = neg[i];
        }

        return nums;
    }
};