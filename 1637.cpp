// 1637. Widest Vertical Area between Two Points Containing No points
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

    int maxWidthOfVerticalArea(vector<vector<int>>& points){
        // Sorting the array
        sort(points.begin(), points.end());

        int result = 0;
        for( int i = 0; i < points.size(); i++ ){
            result = max(result, points[i][1] - points[i-1][1]);
        }

        return result;
    }
};

int main(){
    return 0;
}