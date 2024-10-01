// 633. Sum of Square Numbers
#include <bits/stdc++.h>
using namespace std;

// Two Pointer Approach
class Solution {
public:
    bool judgeSquareSum(int c) {
        int low = 0, high = c / 2;
        while( low < high ){
            int res = (low * low) + (high * high);
            if (res == c)
                return true;
            else if (res < c)
                low++;
            else {
                high--;
            }
        }

        return false;
    }
};

// binary Search Approach
class Solution {
public:
    bool judgeSquareSum(int c) {
        for (int i = 0; i * i < c; i++){
            int b = c - (int)(i * i);

            if (binarySearch(0, b, b))
                return true;
        }

        return false;
    }

    bool binarySearch(int x, int y, int r){
        if (x > y){
            return false;
        }

        int mid = (x + y) / 2;
        if (mid * mid == r){
            return true;
        }
        
        if (mid * mid > r){
            return binarySearch(x, mid - 1, r);
        }
        return binarySearch(mid + 1, y, r);
    }
};

int main(){

    return 0;
}