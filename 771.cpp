// 771. Jewels and Stones
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int numJewelsInStones(string jewels, string stones){
        unordered_map<char, int> mp;
        for(int i = 0; i < stones.length(); i++){
            mp[stones[i]] += 1;
        }

        int result = 0;
        for(int i = 0; i < jewels.length(); i++){
            result += mp[jewels[i]];
        }

        return result;
    }
};

int main(){

    return 0;
}