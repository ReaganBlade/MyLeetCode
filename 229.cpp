// 229. Majority Element II
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        int count1 = 0, count2 = 0;
        int e1 = INT_MIN, e2 = INT_MIN;

        for( int i = 0; i < n; i++ ){
            if (count1 == 0 && e2 != nums[i]){
                count1 = 1;
                e1 = nums[i];
            }
            else if(count2 == 0 && e1 != nums[i]){
                count2 = 1;
                e2 = nums[i];
            }
            else if( e1 == nums[i] ){
                count1++;
            }
            else if( e2 == nums[i] ){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }

        vector<int> ls;

        count1 = 0, count2 = 0;
        for(int i = 0; i < n; i++){
            if (nums[i] == e1) count1++;
            if (nums[i] == e2) count2++;
        }

        int mini = int(n / 3) + 1;
        if (count1 >= mini) ls.push_back(e1);
        if (count2 >= mini) ls.push_back(e2);

        return ls;
    }    
};

int main(){

    return 0;
}