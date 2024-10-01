// 231. Power of Two
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isPowerOfTwo(int n) {
        int count = 0;
        while (n > 0){
            if ((n & 1) == 1) {
                count++;
            }
            n = n >> 1;
        }


        if (count == 1){
            return true;
        }

        return false;
    }
};

int main(){

    return 0;
}