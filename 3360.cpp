// 3360. Stone Removal Game
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool canAliceWin(int n){
        if (n < 10) return false;
        int cur_val = 10;
        bool res = false;

        while (n > 0){
            if (n >= cur_val){
                res = !res;
                n -= cur_val;
            } else {
                return false;
            }
            cur_val -= 1;
        }

        return res;
    }
};

int main(){

    return 0;
}