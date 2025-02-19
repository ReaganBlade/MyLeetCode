// 2028. Find Missing Observations
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        vector<int> result;
        
        int sumOfRolls = 0;
        for (auto i: rolls){
            sumOfRolls += i;
        }

        int rem = mean * (m + n) - sumOfRolls;
        for (int i = 0; i < n; i++){
            
        }
        
    }
};

int main(){

}