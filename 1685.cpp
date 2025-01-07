// 1685. Sum of Absolute Differences in a Sorted Array
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int> & nums){
        long long sum = 0;
        for (auto i: nums){
            sum += i;
        }

        vector<int> result;
        for (auto i: nums){
            result.emplace_back(abs(sum - 3 * i));
        }

        return result;
    }
};

int main(){
    return 0;
}