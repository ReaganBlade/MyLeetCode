// 56. Merge Intervals
#include <bits/stdc++.h>
using namespace std;
// BRUTE 
// class Solution{
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals){
//         int n = intervals.size();
//         sort(intervals.begin(), intervals.end());

//         vector<vector<int>> result;

//         for( int i = 0; i < n; i++){
//             int start = intervals[i][0];
//             int end = intervals[i][1];

//             if (!result.empty() && end <= result.back()[1]){
//                 continue;
//             }

//             for( int j = i+1; j < n; j++ ){
//                 if(intervals[j][0] <= end){
//                     end = max(end, intervals[j][1]);
//                 }
//                 else{
//                     break;
//                 }
//             }

//             result.push_back({start, end});
//         }
//     }
// };


class Solution{
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals){
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> result;

        for(int i = 0; i < n; i++){
            if (result.empty() || intervals[i][0] > result.back()[1]){
                result.push_back(intervals[i]);
            } else {
                result.back()[1] = max(result.back()[1], intervals[i][1]);
            }
        }

        return result;
    }
};

int main(){

    return 0;
}