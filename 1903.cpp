// 1903. Largest Odd Number in String
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        int oddNum = stoi(num);
        if ((int)oddNum % 2 != 0){
            return (oddNum > INT_MAX) ? to_string(INT_MAX) : to_string(oddNum);
        }
        string result = "";
        string current = "";
        for(auto i: num){
            current += i;
            if (stoi(current) % 2 != 0){
                result = current;
            }
        }

        return result;
    }
};

class Solution{
public:
    string largestOddNumber(string num) {
        int n = num.length() - 1;

        for( int i =  n; i >= 0; i--){
            int s = (int)num.at(i);
            if (s % 2 != 0) return num.substr(0, i + 1);
        }

        return "";
    }
};

int main(){

    return 0;
}