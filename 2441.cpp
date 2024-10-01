// 2441. Largest Positive Integer That Exists With it's Negative
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int findmaxK(vector<int> & nums){
        
        sort(nums.begin(), nums.end(), greater<int>());
        for(int i = 0; i < nums.size(); i++){
            auto it = find(nums.begin(), nums.end(), -nums[i]);
            if (it != nums.end())
                return nums[i];
        }

        return -1;
    }
};

int main(){

    return 0;
}