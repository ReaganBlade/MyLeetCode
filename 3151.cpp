// 3151. Special Array I
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if (nums.size() == 1){
            return true;
        }
        for (int i = 1; i < nums.size(); i++){
            if ((nums[i] - nums[i-1]) % 2 == 0) return false;
        }

        return true;
    }
};

int main(){

    return 0;
}