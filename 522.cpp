// 522. Longest Uncommon Subsequence II
#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool isSubsequence(const string& s1, const string& s2){
        int i = 0;
        for (char c: s2){
            if (i < s1.size() && s1[i] == c){
                i++;
            }
        }

        return i == s1.size();
    }
public:
    int findLUSlength(vector<string>& strs) {
        sort(strs.begin(), strs.end(), [](const string& a, const string& b){
            return a.size() > b.size();
        });

        for (int i = 0; i < strs.size(); i++){
            bool isUncommon = true;
            for (int j = 0; j < strs.size(); j++){
                if ( i != j && isSubsequence(strs[i], strs[j])){
                    isUncommon = false;
                    break;
                }
            }

            if (isUncommon){
                return strs[i].size();
            }
        }

        return -1;
    }
};


int main(){

    return 0;
}