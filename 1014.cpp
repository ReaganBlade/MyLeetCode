// 1014. Best Sightseeing Pair
#include <bits/stdc++.h>
using namespace std;

// Naive Solution
// class Solution {
// public:
//     int maxScoreSightseeingPair(vector<int>& values) {
//         int maxOut = INT_MIN;

//         for (int i = 0; i < values.size() - 1; i++){
//             for (int j = i + 1; j < values.size(); j++){
//                 maxOut = max(maxOut, values[i] + values[j] + i - j);
//             }
//         }

//         return maxOut;
//     }
// };

// Dynamic Programming Approach
class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        vector<int> maxLeftScores(n);
        maxLeftScores[0] = values[0];
        
        int maxScore = 0;

        for (int i = 1; i < n; i++){
            int currentRightScore = values[i] - i;
            maxScore = max(maxScore, maxLeftScores[i - 1] + currentRightScore);

            int currentLeftScore = values[i] + i;
            maxLeftScores[i] = max(maxLeftScores[i - 1], currentLeftScore);
        }

        return maxScore;
    }
};

int main(){

    return 0;
}