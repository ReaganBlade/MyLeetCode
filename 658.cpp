// Find K CLosest Elements
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x){
        int l = 0, r = arr.size() - 1;

        while((r - l + 1) > k){
            
            if (abs(arr[l] - x) > abs(arr[r] - x)){
                l++;
            }
            else {
                r--;
            }
        }

        return vector<int> (arr.begin() + l, arr.begin() + r + 1);
    }
};

int main(){

    return 0;
}