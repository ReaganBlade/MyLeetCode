// 1838. Frequency of the Most Frequent Element
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int maxFrequency(vector<int>& nums, int k){
        sort(nums.begin(), nums.end());

        int left = 0;
        int ans = 0;
        long curr = 0;

        for(int right = 0; right < nums.size(); right++){
            long target = nums[right];
            curr += target;

            while((right - left + 1) * target - curr > k){
                curr -= nums[left];
                left++;
            }

            ans = max(ans, right - left + 1);
        }


        return ans;
    }
};

int main(){

    return 0;
}