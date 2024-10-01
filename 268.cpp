// 268. Missing Number
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int missingNumber(vector<int>& nums){
        int n = nums.size();
        n = (n * (n + 1)) / 2;
        int sum = 0;
        for(auto i: nums){
            sum += i;
        }

        return n - sum;
    }
};

int main(){

    return 0;
}