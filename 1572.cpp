// 1572. Matrix Diagonal Sum
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int diagonalSum(vector<vector<int>>& mat){
        int result = 0;
        int s = mat.size();
        
        if(s % 2 != 0){
            for(int i = 0; i < s; i++){
                result += mat[i][i];
                result += mat[i][s - i - 1];
            }

            result -= mat[s/2][s/2];

            return result;
        }

        for(int i = 0; i < s; i++){
            result += mat[i][i];
            result += mat[i][s - i - 1];
        }

        return result;
    }
};

int main(){
    
}