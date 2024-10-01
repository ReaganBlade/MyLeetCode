// 2104. Sum of Subarray Ranges
#include <bits/stdc++.h>
using namespace std;

// Brute Force Solution
class Solution{
public:
    long long subArrayRanges(vector<int>& nums){
        long long result = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++){
            int mn = INT_MAX, mx = INT_MIN;
            for(int j = i; j < n; j++){
                mn = min(mn, nums[j]);
                mx = max(mn, nums[j]);
            }

            result += (mx - mn);
        }

        return result;
    }
};


// Optimised Solution - Stack Approach
class Solution{
public:
    long long subArrayRanges(vector<int>& nums){
        // To calculate left[i] and right[i]; - using two increasing stacks
        long long result = 0, n = nums.size(), j, k;
        stack<int> s;
        for( int i = 0; i <= n; i++){
            while(!s.empty() && nums[s.top()] > (i == n ? -2e9: nums[i])){
                j = s.top(), s.pop();
                k = s.empty() ? -1: s.top();
                result -= (long long) nums[j] * (i - j) * (j - k);
            }

            s.push(i);
        }

        s = stack<int>();

        for(int i = 0; i <= n; i++){
            while(!s.empty() && nums[s.top()] < (i == n ? 2e9 : nums[i])){
                j = s.top(), s.pop();
                k = s.empty() ? -1: s.top();
                result += (long long) nums[j] * (i - j) * (j - k);
            }

            s.push(i);
        }

        return result;
    }
};

int main(){
    return 0;
}