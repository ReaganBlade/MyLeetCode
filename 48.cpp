// 48. Rotate Image
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void rotate(vector<vector<int>>& matrix){
        int n = matrix.size();

        // transpose of a matrix
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                if(i != j){
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }

        // reversing array
        for(int i = 0; i < n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

int main(){


    return 0;
}