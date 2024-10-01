// 1684. Count the Number of Consistent Strings
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int countConsistentStrings(string allowed, vector<string>& words){
        int count = 0;
        for (const string& word: words){
            bool flag = false;
            for(char c: word){
                if (allowed.find(c) == string::npos){
                    flag = false;
                    break;
                }
                flag = true;
            }

            if (flag) count++;
        }

        return count;
    }
};

int main(){

    Solution s;

    return 0;
}