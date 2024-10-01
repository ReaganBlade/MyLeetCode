// 1296. Divide Array in Sets of Consecutive Numbers
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isPossibleDivide(vector<int> &nums, int k){
        if (nums.size() % k != 0)
            return false;
        
        sort(nums.begin(), nums.end());

        unordered_map<int, int> mp;

        for (int i : nums){
            mp[i]++;
        }

        for(int i = 0; i < nums.size(); i++){
            if (mp[nums[i]] == 0) continue;

            else {
                for (int j = 0; j < k; j++){
                    int grp = nums[i] + j;
                    if (mp[grp] == 0)
                        return false;

                    mp[grp]--;
                }
            }
        }

        return true;
    }
};

int main(){

    return 0;
}