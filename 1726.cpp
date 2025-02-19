// 1726. Tuple with same Product
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int tupleSameProduct(vector<int>& nums){
        map<int, int> prods;
        for (int i = 0; i < nums.size(); i++){
            for (int j = i + 1; j < nums.size(); j++){
                int product = nums[i] * nums[j];
                prods[product]++;
            }
        }

        for (auto i: prods){
            if (i.second >= 2){
                
            }
        }
    }
};

int main(){
    Solution S;
    vector<int> numbers = {2,3,4,6,8,12};

    int result = S.tupleSameProduct(numbers);
    cout << result << endl;

    return 0;
}