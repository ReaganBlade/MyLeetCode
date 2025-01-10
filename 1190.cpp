// 1190. Reverse Substrings Between Each Pair of Parentheses
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> stk;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == ')'){
                // cout << s[i] << " popping elements" << endl;
                string temp = "";
                while(stk.top() != '('){
                // cout << stk.top() << " pop" << endl;
                    temp += stk.top();
                    stk.pop();
                }
                stk.pop();
                for (auto i: temp){
                    // cout << i << " pushing in temp" << endl;
                    stk.push(i);
                }
            } else {
                // cout << s[i] << " push" << endl;
                stk.push(s[i]);
            }
        }

        string result = "";
        while (!stk.empty()){
            result += stk.top();
            stk.pop();
        }

        reverse(result.begin(), result.end());
        return result;
    }
};

// Optimized code
class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> stk;
        string current = "";
        
        for (char ch : s) {
            if (ch == '(') {
                stk.push(current);
                current = ""; // Start a new substring inside parentheses
            } else if (ch == ')') {
                reverse(current.begin(), current.end());
                current = stk.top() + current; // Append reversed substring to previous
                stk.pop();
            } else {
                current += ch; // Build the current substring
            }
        }
        
        return current;
    }
};


int main(){
    Solution s;
    string x = "(abcd)";
    string result = s.reverseParentheses(x);

    cout << result << endl;
    return 0;
}