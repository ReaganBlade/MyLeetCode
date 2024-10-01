// 1011. Capacity To Ship Packages Within D Days
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool compInDays(vector<int> weights, int wL, int dayLim){
        int days = 1;
        int sum = 0;
        for(int i = 0; i < weights.size(); i++){
            sum += weights[i];
            if (sum > wL){
                sum = weights[i];
                days++;
            }
        }

        if (days > dayLim)
            return false;
        return true;
    }

    long long sumOfAll(vector<int> weights){
        long long sum = 0;
        for( int i = 0; i < weights.size(); i++ ){
            sum += weights[i];
        }

        return sum;
    }

    
    int shipWithinDays(vector<int>& weights, int days) {

        int low = *max_element(weights.begin(), weights.end()), high = sumOfAll(weights);
        int result = 0;

        if (weights.size() == 1) return weights[0];
        if (days == 1) return high;

        while(low <= high){
            int mid = (low + high) / 2;
            if (compInDays(weights, mid, days)){
                result = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return result;
    }
};

int main(){
    Solution S;

    // Example 1;
    // vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    // int days = 5;

    // Example 2;
    vector<int> weights = {3,2,2,4,1,4};
    int days = 3;

    int result = S.shipWithinDays(weights, days);

    cout << result;

    return 0;
}