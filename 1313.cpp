// 1313. Decompress Run-Length Encoded List
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        // int pos = 0;
        for(int i = 0; i < n; i+2){
            result.insert(result.end(), nums[2*i + 1], nums[i]);
        }

        return result;
    }
};

int main(){

    return 0;
}