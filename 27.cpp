// 27. Remove Element
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int removeElement(vector<int> & nums, int val){
        vector<int> temp = nums;
        nums.erase(nums.begin(), nums.end());

        for( int i = 0; i < temp.size(); i++ ){
            if (val != temp[i]){
                nums.push_back(temp[i]);
            }
        }

        return nums.size();
    }
};

int main(){

    return 0;
}