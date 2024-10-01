// 121. Best Time to Buy ans Sell Stock
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int maxProfit(vector<int>& prices){
        int minPrice = prices[0];
        int maxProfit = 0;
        for(int i = 1; i < prices.size(); i++){
            int cost = prices[i] - minPrice;
            maxProfit = max(maxProfit, cost);
            minPrice = min(minPrice, prices[i]);
        }

        return maxProfit;
    }
};

int main(){

    return 0;
}