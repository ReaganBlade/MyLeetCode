// 1052. Grumpy Bookstore Owner
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int result = 0;
        int n = customers.size();
        for (int i = 0; i < n; i++){
            if (i < (n - minutes)){
                if (grumpy[i] != 1)
                    result += customers[i];
            } else {
                result += customers[i];
            }
        }
        
        return result;
    }
};