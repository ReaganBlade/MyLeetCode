// 402. Remove K Digits
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);


        int n = num.size();
        stack<char> stk;

        for (char c: num){
            while(!stk.empty() && k > 0 && stk.top() > c){
                stk.pop(); 
                k -= 1;
            }

            if (!stk.empty() || c != '0'){
                stk.push(c);
            }
        }

        while(!stk.empty() && k--){
            stk.pop();
        }

        if (stk.empty()){
            return "0";
        }

        while(!stk.empty()){
            num[n-1] = stk.top();
            stk.pop();
            n -= 1;
        }

        return num.substr(n);
    }
};

int main(){

    return 0;
}