// 8. String to Integer (atoi)
#include <bits/stdc++.h>
using namespace std;

// class Solution{
// public:
//     int myAtoi(string s) {
//         int i = 0;
//         if ((s[i] - 'a') >= 0){
//             return 0;
//         }
//         int result = NULL;
//         bool neg = false;
//         for (int i = 0; i < s.length(); i++){
//             if ( s[i] == ' ') {
//                 continue;
//             }
//             else if (result == NULL && s[i] == '-')
//                 neg = true;
//             else if (isdigit(s[i]))
//                 result = result * 10 + (s[i] - 48);
//             else break;
//         }

//         return (neg == true) ? -result: result;
//     }
// };

// Other Solution
class Solution{
    void trim(string& s){
        s.erase(0, s.find_first_not_of(' '));
        s.erase(s.find_last_not_of(' ') + 1);
    }
public:
    int myAtoi(string s) {
        trim(s);
        if(s.empty())
            return 0;


        const int sign = s[0] == '-' ? - 1: 1;
        if (s[0] == '+' || s[0] == '-')
            s = s.substr(1);

        long num = 0;

        for (const char c: s) {
            if (!isdigit(c))
                break;
            num = num * 10 + (c - '0');
            if (sign * num < INT_MIN)
                return INT_MIN;
            if (sign * num > INT_MAX)
                return INT_MAX;
        }

        return sign * num;
    }
};

int main(){
    Solution S;
    string ss = "   1337c0d3";
    int result = S.myAtoi(ss);

    cout << result;

    return 0;
}