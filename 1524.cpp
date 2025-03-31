// 1524. Number of Sub-Arrays With Odd Sum
#include <bits/stdc++.h>
using namespace std;


// Naive Solution
// class Solution{
// public:
//     int numOfSubarrays(vector<int>& arr){
//         int Odd_Sum = 0;
//         for (int i = 0; i < arr.size(); i++){
//             int cur_sum = 0;
//             for (int j = 0; j < arr.size(); j++){
//                 cur_sum += arr[j];
//                 if (cur_sum % 2 != 0) Odd_Sum++;
//             }
//         }

//         return Odd_Sum;
//     }
// };

// Dynamic Programming
class Solution{
public:
    int numOfSubarrays(vector<int>& arr){
        const int MOD = 1e9 + 7;
        int n = arr.size();

        for (auto& num: arr){
            num %= 2;
        }

        vector<int> dpEven(n), dpOdd(n);

        if (arr[n - 1] == 0){
            dpEven[n - 1] = 1;
        } else {
            dpOdd[n - 1] = 1;
        }

        for (int num = n - 2; num >= 0; num--){
            if (arr[num] == 1){
                dpOdd[num] = (1 + dpEven[num + 1]) % MOD;
                dpEven[num] = dpOdd[num + 1];
            } else {
                dpEven[num] = (1 + dpEven[num + 1]) % MOD;
                dpOdd[num] = dpOdd[num + 1];
            }
        }

        int count = 0;
        for (auto oddCount: dpOdd){
            count += oddCount;
            count %= MOD;
        }

        return count;
    }
};

int main(){

    return 0;
}