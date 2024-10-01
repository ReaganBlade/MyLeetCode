// 1936. Add Minimum Number of Rungs
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int curr = rungs[0];
        int reqStep = 0, i = 0;
        while(i < rungs.size() - 1){
            if ((curr + dist) >= rungs[i + 1]){
                curr = rungs[i + 1];
                i++;
            } else {
                reqStep += 1;
                curr += dist;
            }
        }
        return reqStep;
    }
};