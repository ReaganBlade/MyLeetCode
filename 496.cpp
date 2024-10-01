// 496. Next Greater Element
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        stack<int> stk;
        map<int, int> mp;

        for(int i = nums2.size() - 1; i >= 0; i--){
            while(!stk.empty() && stk.top() <= nums2[i]){
                stk.pop();
            }

            mp[nums2[i]] = stk.empty() ? -1 : stk.top();

            stk.push(nums2[i]);
        }

        for (auto i: nums1){
            result.push_back(mp[i]);
        }

        return result;
    }
};

int main(){

    return 0;
}