// 32. Longest Valid Parantheses
#include <bits/stdc++.h>
using namespace std;

// class Solution{
// public:
//     int longestValidParentheses(string s){
//         stack<char> pStack;
//         int longValid = 0;

//         for (int i = 0; i < s.length(); i++){
//             if (!pStack.empty() && s[i] == ')'){
//                 pStack.pop();
//                 longValid += 2;
//             }
//             else if (s[i] == '('){
//                 pStack.push('(');
//             }
//         }

//         return longValid;
//     }
// };

// correct way
class Solution{
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);

        int len = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                st.pop();
                if (st.size() == 0) {
                    st.push(i);
                } else {
                    len = max(len, i - st.top());
                }
            }
        }

        return len;
    }
};

int main(){

    return 0;
}