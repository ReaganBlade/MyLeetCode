// 169. Majority Element
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int majorityElement(vector<int>& nums){
        int count = 0;
        int e;
        for(int i = 0; i < nums.size(); i++){
            if(count == 0){
                count = 1;
                e = nums[i];
            } else if (e == nums[i]){
                count++;
            } else {
                count--;
            }
        }

        int count2 = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == e) count2++;
        }

        if(count2 > (nums.size() / 2))
            return e;
        return -1;
    }
};

int main(){

    return 0;
}