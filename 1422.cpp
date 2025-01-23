// 1422. Maximum Score After splitting a string
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(string s) {
        int C0 = 0, C1 = 0;
        for (auto i: s){
            if (i == '1') C1++;
        }

        int maxScore = 0;

        for (int i = 0; i < s.size() - 1; i++){
            if (s[i] == '0') C0++;
            if (s[i] == '1') C1--;
            maxScore = max(maxScore, C0 + C1);
        }

        return maxScore;
    }
};

int main(){

    return 0;
}