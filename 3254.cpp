// 3254. Find the Power of K-Size Subarrays I
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> resultsArray(vector<int>& nums, int k){
        int len = nums.size();
        vector<int> result(len - k + 1);

        for (int start = 0; start <= len - k; start++){
            bool isSorted = true;

            for (int i = start; i < start + k - 1; i++){
                if (nums[i + 1] != nums[i] + 1){
                    isSorted = false;
                    break;
                }
            }

            if (isSorted){
                result[start] = nums[start + k - 1];
            } else {
                result[start] = -1;
            }
        }

        return result;
    }
};

int main(){

    return 0;
}