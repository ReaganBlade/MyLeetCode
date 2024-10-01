// 1588. Sum of All Odd length Subarray
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int result = 0;

        for( int left = 0; left < n; left++ ){
            int currentSum = 0;

            for (int right = left; right < n; right++){
                currentSum += arr[right];
                result += (right - left + 1) % 2 == 0 ? currentSum : 0;
            }
 
        }

        return result;
    }
};