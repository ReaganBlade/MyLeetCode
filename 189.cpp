// 189. Rotate Array
#include <bits/stdc++.h>
using namespace std;

// class Solution{
// public:
//     void rotate(vector<int>& num, int k){
//         vector<int> result;

//         for(int i = num.size() - k; i < num.size(); i++){
//             result.push_back(num[i]);
//         }

//         for(int i = 0; i < num.size() - k; i++){
//             result.push_back(num[i]);
//         }

//         num = result;
//     }
// };

class Solution{
public:
    void rotate(vector<int>& num, int k){
        int n = num.size();
        k = k % n;

        if( k == 0 ) return;

        reverse(num.begin(), num.end());
        reverse(num.begin(), num.begin() + k);
        reverse(num.begin() + k, num.end());
    }
};



int main(){
    Solution s;

    vector<int> test = {1,2,3,4,5,6,7};
    s.rotate(test, 3);

    for(auto i: test){
        cout << i << " ";
    }

    return 0;
}