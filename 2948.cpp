// 2948. Make Lexicographically Smallest Array by Swapping Elements
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        vector<int> sortedNums(nums);
        sort(sortedNums.begin(), sortedNums.end());

        int currGroup = 0;
        map<int, int> numToGroup;
        numToGroup.insert(pair<int, int>(sortedNums[0], currGroup));

        map<int, list<int>> groupToList;
        groupToList.insert(
            pair<int, list<int>>(currGroup, list<int>(1, sortedNums[0])));

        for (int i = 1; i < nums.size(); i++) {
            if (abs(sortedNums[i] - sortedNums[i - 1]) > limit) {

                currGroup++;
            }

            numToGroup.insert(pair<int, int>(sortedNums[i], currGroup));

            if (groupToList.find(currGroup) == groupToList.end()) {
                groupToList[currGroup] = list<int>();
            }
            groupToList[currGroup].push_back(sortedNums[i]);
        }

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int group = numToGroup[num];
            nums[i] = *groupToList[group].begin();
            groupToList[group].pop_front();
        }

        return nums;
    }
};

int main(){

    return 0;
}