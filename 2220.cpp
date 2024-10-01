// 2220. Minimum Bit Flips to Convert Number
#include <bits/stdc++.h>
using namespace std;

// Brute 
// class Solution {
// public:
//     int minBitFlips(int start, int goal) {
        
//     }
// };


class Solution {
public:
    int minBitFlips(int start, int goal) {
        int answer = start ^ goal;
        int count = 0;
        while(answer){
            count += answer & 1;
            answer >>= 1;
        }

        return count;
    }
};



class Solution {
public:
    int minBitFlips(int start, int goal) {
        
    }
};

int main(){

    return 0;
}