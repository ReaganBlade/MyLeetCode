// 2011. Final Value of Variable After Performing Operations
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res = 0;
        for (const auto& i : operations){
            if (i[1] == '+'){
                res++;
            } else {
                res--;
            }
        }

        return res;
    }
};