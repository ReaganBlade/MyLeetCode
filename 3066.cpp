// 3066. Minimum Operations to Exceed Threshold Value II
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end());
        int min, max;
        int count = 0;

        if (pq.size() <= 1){
            return count;
        }

        while (pq.top() < k) {
            min = pq.top(); pq.pop();
            if (pq.empty()) break;
            max = pq.top(); pq.pop();

            count += 1;
            pq.push(min * 2 + max);
        }
        return count;
    }
};


int main(){
    vector<int> test = {1000000000,999999999,1000000000,999999999,1000000000,999999999};
    int k = 1000000000;

    Solution S;
    int res = S.minOperations(test, k);
    cout << res << endl;
}