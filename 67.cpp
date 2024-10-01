// 67. Add Binary
#include <iostream>
using namespace std;

class Solution{
public:
    string addBinary(string a, string b){
        int maxLen = max(a.length(), b.length());
        a = string(maxLen - a.length(), '0') + a;
        b = string(maxLen - b.length(), '0') + b;

        int carry = 0;
        string result;

        for(int i = maxLen - 1; i >= 0; i--){
            int dSum = (a[i] - '0') + (b[i] - '0') + carry;

            result = to_string(dSum % 2) + result;

            carry = dSum / 2;
        }

        if (carry){
            result = '1' + result;
        }

        return result;
    }
};

int main(){
    return 0;
}