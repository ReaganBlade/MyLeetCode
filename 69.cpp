// 69. sqrt(x)
#include <bits/stdc++.h>
using namespace std;

// Simple Approach
// class Solution{
// public:
//     int mySqrt(int x){
//         if(x == 0 || x == 1) return 0;

//         int i = 1, res = 1;
//         while(res <= x){
//             i++;
//             res = i*i;
//         }

//         return i-1;
//     }
// };

// runtime error
// class Solution{
// public:
//     int mySqrt(int x){
//         if(x == 0 || x == 1) return x;

//         int low = 1, high = x;

//         while(low <= high){
//             int mid = (high + low) / 2;
//             if (mid > (x / mid)) {
//                 high = mid - 1;
//             } else {
//                 if ((mid + 1) > (x / (mid + 1))){
//                     return mid;
//                 }
//                 low = mid + 1;
//             }
//         }

//         return low;
//     }
// };


// 
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;

        int start = 1;
        int end = x;
        int mid = -1;

        while (start <= end) {
            mid = (start + end) / 2;

            long long square = static_cast<long long>(mid) * mid;

            if (square > x){
                end = mid - 1;
            } else if (square == x){
                return mid;
            } else {
                start = mid + 1;
            }
        }

        return static_cast<int>(round(end));
    }
};

int main(){

    return 0;
}