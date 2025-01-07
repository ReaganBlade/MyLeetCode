// 1822. Sign of the product of an array
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg = 0;

        for (auto i: nums){
            if (i == 0) return 0;
            if (i < 0) neg++;
        }

        if (neg % 2 == 0){
            return 1;
        }
        return -1;
    }
};

int main(){

    return 0;
}