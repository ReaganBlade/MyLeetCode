// 2761. Prime Pairs with Target Sum
#include <bits/stdc++.h>
using namespace std;

// Time Limit Exceeded
// 
// class Solution {
//     bool isPrime(int x){
//         if (x <= 1)
//             return false;
        
//         for(int i = 2; i <= x / 2; i++){
//             if (x % i == 0)
//                 return false;
//         }

//         return true;
//     }

// public:
//     vector<vector<int>> findPrimePairs(int n) {
//         vector<int> numbers;
//         vector<vector<int>> PrimePairs;
//         for( int i = 2; i <= n; i++ ){
//             if (isPrime(i)){
//                 numbers.push_back(i);
//                 int x = n - i;
//                 auto it = find(numbers.begin(), numbers.end(), x);
//                 if ( it != numbers.end()){
//                     PrimePairs.push_back({numbers[it - numbers.begin()], i});
//                 }
//             }
//         }
//         sort(PrimePairs.begin(), PrimePairs.end(), [](vector<int>& a, vector<int>& b){
//         return (a[0] < b[0]);
//     });

//         return PrimePairs;
//     }
// };


class Solution{
public:
    vector<vector<int>> findPrimePairs(int n){
        vector<vector<int>> result;
        if (n == 1) return result;

        vector<int> primes(n + 1, true);
        primes[0] = 0;
        primes[1] = 0;

        for( int i = 2; i*i <= n; i++){
            if (primes[i] == 1){
                for ( int j = i * i; j <= n; j += i){
                    primes[j] = 0;
                }
            }
        }

        for(int i = 2; i <= n / 2; i++){
            if (primes[i] && primes[n - i]){
                vector<int> temp;
                temp.push_back(i);
                temp.push_back(n - i);
                result.push_back(temp);
            }
        }

        return result;
    }
};

int main(){
    Solution s;
    vector<vector<int>> result = s.findPrimePairs(10);
    for(auto i: result){
        cout << i[0] << " " << i[1] << endl;
    }

    return 0;
}