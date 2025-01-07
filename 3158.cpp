// 3158. Find the XOR of Numbers Which Appear Twice
#include <bits/stdc++.h>
using namespace std;

// Using HashMap
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums){
        int res = 0;
        map<int, int> mp;

        for (auto i: nums){
            mp[i]++;
            if (mp[i] == 2){
                res ^= i;
            }
        }

        return res;
    }
};

// Using Set
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums){
        int res = 0;
        set<int> st;

        for (auto i: nums){
            if (st.count(i)){
                res ^= i;
            } else {
                st.insert(i);
            }
        }
        
        return res;
    }
};

int main(){
    return 0;
}