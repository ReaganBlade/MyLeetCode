// 1732. Find the Highest Altitude
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest = 0;
        int current = 0;
        for (int i: gain){
            current += i;
            if (current > highest)
                highest = current;
        }

        return highest;
    }
};

int main(){
    Solution s;
    

    return 0;
}