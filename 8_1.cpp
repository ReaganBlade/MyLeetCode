// 8. String to Integer (atoi)
#include <bits/stdc++.h>
using namespace std;

class Solution {
    void trim(string& s){
        s.erase(0, s.find_first_not_of(' '));
        s.erase(s.find_last_not_of(' ') + 1);
    }

    int solve(string s){
        if (isdigit(s[0]))
            return s[0] * 10 + solve(s.substr(1));
        else return 0; 
    }

public:
    int myAtoi(string s) {
        trim(s);
        int sign = 1;
        if (s[0] == '-'){
            sign = -1;
            s = s.substr(1);
        } else if (s[0] == '+') {
            sign = 1;
            s = s.substr(1);
        }
        int result = sign * solve(s);
        
        return result;
    }
};

int main(){

    return 0;
}