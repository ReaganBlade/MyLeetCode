// 2364. Count Number of Bad Pairs
#include <bits/stdc++.h>
using namespace std;

// Brute Force Solution
/*
class Solution {
public:
    long long countBadPairs(vector<int>& nums){
        long long badPairs = 0;
        for (int i = 0; i < nums.size(); i++){
            for (int j = i + 1; nums.size(); j++){
                if (i - nums[i] != j - nums[j]){
                    badPairs++;
                }
            }
        }

        return badPairs;
    }
};
*/
/*
class Solution {
public:
    long long countBadPairs(vector<int>& nums){
        long long badPairs = 0;
        map<int, int> diffCount;

        for (int pos = 0; pos < nums.size(); pos++){
            int diff = pos - nums[pos];

            int goodPairsCount = diffCount[diff];

            badPairs += pos - goodPairsCount;

            diffCount[diff] = goodPairsCount + 1;
        }

        return badPairs;
    }
};
*/

class Solution {
public:
    long long countBadPairs(vector<int>& nums){
        long long bad_pairs = 0;
        map<int, int> diff_pair_count;

        for (int i = 0; i < nums.size(); i++){
            int diff = i - nums[i];

            int good_pair_count = diff_pair_count[diff];

            bad_pairs += i - good_pair_count;

            diff_pair_count[diff] = good_pair_count + 1;
        }

        return bad_pairs;
    }
};


int main(){

    return 0;
}