// 1720. Decode XORed Array
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> decode(vector<int>& encoded, int first){
        int n = encoded.size();
        vector<int> result (n+1, first);
        int curr = first;
        for(int i = 0; i < n; i++){
            result[i+1] = encoded[i] ^ curr;
            curr = result[i+1];
        }

        return result;
    }
};

int main(){
    Solution S;
    vector<int> e = {1,2,3};
    int f = 1;
    vector<int>result = S.decode(e, f);
    
    for(auto i : result){
        cout << i << " ";
    }

    return 0;
}