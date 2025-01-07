// 3159. Find Occurences of an Element in an Array
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> result;
        int count = 0;

        // make a map of <count, index + 1>
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == x){
                count++;
                mp[count] = i+1;
            }
        }

        for (auto q: queries){
            if (mp[q]){
                result.emplace_back(mp[q] - 1);
            } else {
                result.emplace_back(-1);
            }
        }

        return result;
    }
};

int main(){

    return 0;
}