// 3168. Minimum Number of Chairs in a Waiting Room
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumChairs(string s) {
        int res = 0, curr = 0;
        for (auto c: s){
            (c == 'E') ? curr += 1: curr -= 1;
            res = max(curr, res);
        }

        return res;
    }
};

int main(){
    return 0;
}