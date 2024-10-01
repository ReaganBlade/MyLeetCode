// 1423. Maximum Points you can Obtain from cards
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

        int lSum = 0, rSum = 0, maxSum = 0;
        for (int i = 0; i < k; i++){
            lSum = lSum + cardPoints[i];
        }

        maxSum = lSum;
        for (int i = 0; i < k; i++){
            lSum = lSum - cardPoints[k-1-i];
            rSum = rSum + cardPoints[n-1-i];

            maxSum = max(maxSum, lSum + rSum);
        }

        return maxSum;
    }
};

int main(){

    return 0;
}