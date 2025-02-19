// 871. Minimum Number of Refuling Stops
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int n_stations = stations.size();
        vector<long> dp (n_stations + 1);
        dp[0] = startFuel;

        for (int i = 0; i < n_stations; i++){
            for (int t = i; t >= 0; t--){
                if (dp[t] >= stations[i][0])
                    dp[t + 1] = max(dp[t + 1], dp[t] + stations[i][1]);
            }
        }

        for (int i = 0; i <= n_stations; i++)
            if (dp[i] >= target) return i;
        
        return -1;
    }
};


int main(){

    return 0;
}