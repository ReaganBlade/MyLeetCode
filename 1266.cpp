// 1266. Minimum Time visiting All points
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points){
        int result = 0;
        for( int i = 0; i < points.size() - 1; i++ ){
            int x = abs(points[i][0] - points[i+1][0]);
            int y = abs(points[i][1] - points[i+1][1]);

            result += max(x, y);
        }

        return result;
    }
};

int main(){

    return 0;
}
