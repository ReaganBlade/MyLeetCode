// 1431. Kids with the greatest # of Candies
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int lst_max = *max_element(candies.begin(), candies.end());
        vector<bool> result(n);

        for (int i = 0; i < n; i++){
            if (candies[i] + extraCandies >= lst_max)
                result[i] = true;
        }

        return result;
    }
};


int main(){

    return 0;
}