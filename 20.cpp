// 20. Valid Paranthesis
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        
        for(char i: s){
            if (i == '(' || i == '[' || i == '{') p.push(i);
            else {
                if (p.empty()) return false;

                char c = p.top();
                p.pop();

                if ((i == '}' && c != '{') || (i == ')' && c != '(') || (i == ']' && c != '[')) {
                    return false;
                }
            }                
        }

        return p.empty();
    }
};

/*
class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        
        for(int i = 0; i < s.length(); i++){
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') p.push(i);
            else if (s[i] == ')' || s[i] == ']' || s[i] == '}'){
                if (p.empty()) return false;

                char c = p.top();
                p.pop();
                if (c == s[i]) {
                    continue;
                }
                else return false;
            }
                
        }

        if (!p.empty())
            return false;
        return true;
    }
};
*/

int main(){

    return 0;
}