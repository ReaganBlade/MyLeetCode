// 283. Move Zeroes
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void moveZeroes(vector<int>& nums){
        if (nums.size() == 1) return;

        int l = 0, r = 0;
        while(r < nums.size()){
            if (nums[r] != 0){
                swap(nums[l], nums[r]);
                l++;
            }
            r++;
        }
    }
};

int main(){
    Solution s;

    vector<int> numbers = {0,1,0,3,12};

    s.moveZeroes(numbers);
    for (int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}