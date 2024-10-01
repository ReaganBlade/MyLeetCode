// 485. Max Consecutive Ones
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int findMaxConsecutive(vector<int>& nums){
        int maxCons = 0, curr = 0;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] == 0){
                maxCons = max(maxCons, curr);
                curr = 0;
            } else{
                curr++;
            }
        }

        maxCons = max(maxCons, curr);
        return maxCons;
    }
};

int main(){

    return 0;
}