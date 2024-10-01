// 1389. Create Target Array in the Given Order
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index){
        int n = nums.size();
        vector<int> result;
        for(int i = 0; i < n; i++){
            result.insert(result.begin() + index[i], nums[i]);
        }

        return result;
    }
};

int main(){

    return 0;
}