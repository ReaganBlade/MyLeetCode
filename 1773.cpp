// 1773. Count Items Matching a Rule
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue){
        int count = 0;
        for ( int i = 0; i < items.size(); i++ ){
            if (ruleKey == "type" && items[i][0] == ruleValue)
                count++;
            else if(ruleKey == "color" && items[i][1] == ruleValue)
                count++;
            else if(ruleKey == "name" && items[i][2] == ruleValue)
                count++;
        }

        return count;
    }
};

int main(){


    return 0;
}