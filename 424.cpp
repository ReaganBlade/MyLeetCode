// Longest Repeating Character
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26);
        int maxCount = 0;

        int left = 0, start = 0, result = 0;

        while(start < s.size()){
            count[s[start] - 'A']++;
            maxCount = max(maxCount, count[s[start] - 'A']);

            if (start - left + 1 - maxCount > k) {
                count[s[left] - 'A']--;
                left++;
            }

            result = max(result, start - left + 1);
            start++;
        }

        return result;
    }
};

int main(){

    return 0;
}