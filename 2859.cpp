// 2859. Sum of Values at Indices With K Set Bits
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k){
        int sum = 0;
        for( int i = 0; i < nums.size(); i++ ){
            if (__builtin_popcount(i) == k)
                sum += nums[i];
        }

        return sum;
    }
};

int main(){
    Solution s;
    vector<int> num = {5,10,1,5,2};
    int k = 1;
    int result = s.sumIndicesWithKSetBits(num, k);

    cout << result;

    return 0;
}