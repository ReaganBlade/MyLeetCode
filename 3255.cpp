// 3255. Find the Power of K-Size Subarrays II
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> resultArray(vector<int>& nums, int k){
        vector<int> res;
        for(int i = 0, cons = 1; i < nums.size(); i++){
            if (i && nums[i] == nums[i - 1] + 1){
                cons++;
            } else {
                cons = 1;
            }

            if (i + 1 >= k){
                res.push_back(cons >= k ? nums[i] : -1);
            }
        }

        return res;
    }
};

int main(){

    return 0;
}