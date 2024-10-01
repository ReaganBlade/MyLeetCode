// 1528. Shuffling String
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string result(s.size(), ' ');

        for(int i = 0; i < indices.size(); i++){
            result[indices[i]] = s[i];
        }

        return result;
    }
};


int main(){

    Solution s;
    string str = "codeleet";
    vector<int> indices = {4,5,6,7,0,2,1,3};
    cout << s.restoreString(str, indices) << endl;

    string str1 = "abc";
    vector<int> in = {0, 2, 1};
    cout << s.restoreString(str1, in) << endl;

    return 0;
}