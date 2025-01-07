// 2078. Two Furthest Houses with Different Colors
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int maxDist = 0;
        
        for (int i = 0; i < n; i++){
            if (colors[i] != colors[0])
                maxDist = max(maxDist, i);
            if (colors[i] != colors[n - 1])
                maxDist = max(maxDist, n - 1 - i);
        }
        return maxDist;
    }
};

int main(){

    return 0;
}