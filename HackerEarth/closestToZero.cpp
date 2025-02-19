// Closest To Zero
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int closestToZero(vector<int> arr, int size){
        int prev_close = INT_MIN;
        int close_till_now = INT_MIN;

        for (int i = 0; i < size; i++){
            if (0 - abs(arr[i]) >= prev_close){
                cout << "Prev Close: " << prev_close << endl;
                cout << "Close Till Now: "<< close_till_now << endl;
                prev_close = abs(arr[i]);
                close_till_now = max(close_till_now, arr[i]);
            }

        }

        return close_till_now;
    }
};

int main(){
    vector<int> arr = {0, 2, 3, 4, 5};
    Solution s;
    int result = s.closestToZero(arr, 5);

    cout << result << endl;

}