// 340. Longest Substring with At Most K Distinct Characters
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int lengthOfLongestSubstringWithKDistinct(string& s, int k){
        int l = 0, r = 0, maxLen = 0;
        map<char, int> mp;

        while(r < s.size()){
            mp[s[r]]++;

            while (mp.size() > k){    //for optimal code replace while with if
                mp[s[l]]--;
                if (mp[s[l]] == 0) mp.erase(s[l]);
                l++;
            }

            if (mp.size() <= k){
                maxLen = max(maxLen, r - l + 1);
            }

            r++;
        }

        return maxLen;
    }
};

int main(){

    return 0;
}