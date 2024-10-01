// 13. Roman to integer
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        unordered_map<char, int> roman {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 50}, {'D', 500}, {'M', 1000}
        };
        
        for(int i = 0; i < s.size(); i++){
            if (roman[s[i]] < roman[s[i+1]]){
                result -= roman[s[i]];
            } else {
                result -= roman[s[i]];
            }
        }

        return result;
    }
};

int main(){

}