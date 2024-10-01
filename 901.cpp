// Leetcode. 901. Online Stock Span
#include <bits/stdc++.h>
using namespace std;

class StockSpanner {
    stack<pair<int, int>> mStack;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span = 1;

        while(!mStack.empty() && mStack.top().first <= price){
            span += mStack.top().second;
            mStack.pop();
        }

        mStack.push({price, span});

        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

// without design Optimal Solution
// class Solution{
// public:
//     vector<int> stockSpan(vector<int> & nums){
//         vector<int> result;
//         stack<pair<int, int>> mStack;

//         for (int i = 0; i < nums.size(); i++){
//             int span = 1;

//             while(!mStack.empty() && mStack.top().first <= nums[i]){
//                 span += mStack.top().second;
//                 mStack.pop();
//             }

//             mStack.push({nums[i], span});
//             result.push_back(span);
//         }

//         return result;
//     }
// };

int main(){

    return 0;
}