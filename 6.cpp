// 6. Zigzag Conversion
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length()){
            return s;
        }

        int index = 0, dir = 1;
        vector<string> temp(numRows, "");

        for (char c: s){
            temp[index] += c;
            if (index == 0){
                dir = 1;
            } else if (index == numRows - 1){
                dir = -1;
            }
            index += dir;
        }

        string result;
        for (int i = 0; i < numRows; i++){
            result += temp[i]; 
        }

        return result;
    }
};

int main() {
    return 0;
}