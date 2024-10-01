// 118. Pascal's Triangle
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> generateRow(int row) {
        long long result = 1;
        vector<int> resRow;
        resRow.push_back(1);

        for(int col = 1; col < row; col++) {
            result = result * (row - col) / col;
            resRow.push_back(result);
        }

        return resRow;
    }

    vector<vector<int>> generate(int numRows){
        vector<vector<int>> result;

        for(int row = 0; row < numRows; row++) {
            result.push_back(generateRow(row + 1));
        }

        return result;
    }
};

int main(){

    return 0;
}