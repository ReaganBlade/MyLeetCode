// 1021. Remove Outermost Paranthesis
#include <bits/stdc++.h>
using namespace std;

// Using counter
class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";

        int len = 0;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '(' && len++ > 0){
                result += s[i];
            }
            if (s[i] == ')' && len-- > 1){
                result += s[i];
            }
        }

        return result;
    }
};

int main(){

    return 0;
}