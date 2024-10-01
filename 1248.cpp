// 1248. Count Number of Nice SubArrays
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        map<int, int> cnt;
        cnt[0] = 1;
        int currSum = 0;
        int total_subarrays = 0;

        for (int num: nums){
            if (num % 2 != 0){
                currSum++;
            }

            if (cnt.find(currSum - k) != cnt.end()){
                total_subarrays += cnt[currSum - k];
            }

            if (num % 2 != 0){
                cnt[1]++;
            } else {
                cnt[0]++;
            }
        }

        return total_subarrays;
    }
};

int main(){

    return 0;
}