// 3074. Apple Redsitribution into Boxes
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity){
        // find the sum first
        int count = 0;
        long long sum = 0;
        for(auto i: apple){
            sum += i;
        }

        // sort the array capactiy
        sort(capacity.begin(), capacity.end());
        
        // loop trough capacity in reverse and find the numer of containers needed
        for (int i = capacity.size() - 1; i >= 0; i--){
            if (sum <= 0){
                break;
            }
            sum -= capacity[i];
            count++;
        }

        return count;
    }
};

int main(){

    vector<int> test = {1, 2, 3, 4, 5};

    return 0;
}