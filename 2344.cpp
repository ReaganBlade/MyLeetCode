// 2344. Minimum Deletions to Make Array Divisible
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        sort(nums.begin(), nums.end());

        int gcd = numsDivide[0];
        for (int i = 1; i < numsDivide.size(); i++) {
            gcd = __gcd(gcd, numsDivide[i]);
        }

        for (int i = 0; i < nums.size(); i++) {
            if (gcd % nums[i] == 0) {
                return i;
            }
        }

        return -1;
    }
};


int main(){
    vector<int> num = {4,3,6};
    vector<int> numsDiv = {8,2,6,10};

    Solution S;
    S.minOperations(num, numsDiv);

    return 0;
}