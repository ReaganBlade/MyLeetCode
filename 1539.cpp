// 1539. Kth Missing Positive Number
#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
//         int n = arr.size();
//         for(int i = 0; i < n; i++){
//             if (arr[i] <= k) k++;
//             else break;
//         }

//         return k;        
//     }
// };

// Using binarySearch
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
            
    }
};

int main(){
    Solution s;
    vector<int> array = {2,3,4,7,11};
    int k = 5;

    cout << s.findKthPositive(array, k);

    return 0;
}