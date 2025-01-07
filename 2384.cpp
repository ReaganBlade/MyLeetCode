// 2384. Largest Palindromic Number
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    string largestPalindromic(string num) {
        string result = "";
        map<char, int> mp;
        for (int i = 0; i < num.size(); i++){
            mp[num[i]]++;
        }

        return result;
    }
};

int main(){
    return 0;
}