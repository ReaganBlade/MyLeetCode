// 29. Divide Two Integers
#include <bits/stdc++.h>
using namespace std;

// For only Positive Integers
// class Solution {
// public:
//     int divide(int dividend, int divisor) {
//         int a = abs(dividend), b = abs(divisor);
//         int result = 0;
//         while(a >= b){
//             a -= b;
//             result += 1;
//         }

//  

//         return result;
//     }
// };

// forall
// class Solution{
// public:
//     int divide(int dividend, int divisor) {
//         if (divisor == 0){
//             return 0;
//         }

//         int quotient = 0;
//         while (dividend >= divisor){
//             int shift = 0;
//             while (( divisor << shift ) <= dividend) {
//                 shift += 1;
//             }

//             quotient += (1 << (shift - 1));
//             dividend -= (divisor << (shift - 1));
//         }

//         return quotient;
//     }
// };


class Solution {
public:
    int divide(int dividend, int divisor) {
        int a = abs(dividend), b = abs(divisor);
        int result = 0;
        while(a >= b){
            a -= b;
            result += 1;
        }

        if (dividend < 0 && divisor < 0)
            return result;
        else if (divisor < 0 || dividend < 0)
            return -result;
        return result;
        // return result;
    }
};

int main(){

    return 0;
}