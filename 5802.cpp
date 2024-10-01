// 5802. Count Good Numbers
#include <bits/stdc++.h>
using namespace std;

// Partially ran solution
// class Solution {

//     long MOD = 1000000007;
//     long power(long x, long n){
//         if (n == 0) return 1;
//         long temp = pow(x, n / 2);

//         if (n % 2 == 0){
//             return (temp * temp) % MOD;
//         } else {
//             return (x * temp * temp) % MOD;
//         }
//     }
// public:
//     int countGoodNumbers(long long n) {
//         long even = (n + 1) / 2;
//         long odd = n / 2;
//         long first = power(5, even) & MOD;
//         long second = power(4, odd) & MOD;

//         return (int)((first*second) % MOD);
//     }
// };


#define mod 1000000007

class Solution{
    long long power(long long x, long long n){
        if (n == 0) return 1;

        long long ans = power(x, n/2);
        ans *= ans;
        ans %= mod;

        if (n % 2 == 1){
            ans *= x;
            ans %= mod;
        }

        return ans;
    }
public:
    int countGoodNumbers(long long n){
        long long oddPlaces = n / 2;
        long long evenPlaces = n/2 + n%2;

        return (power(5, evenPlaces) * power(4, oddPlaces)) % mod;
    }
};