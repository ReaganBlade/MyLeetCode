// 42. Trapping Rain Water
#include <bits/stdc++.h>
using namespace std;

// Two pointer approach
// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n = height.size();
//         int l = 0, r = n - 1;
//         int result = 0;
//         int maxLeft = 0, maxRight = 0;

//         while(l <= r){
//             if (height[l] <= height[r]){
//                 if (height[l] >= maxLeft){
//                     maxLeft = height[l];
//                 }
//                 else {
//                     result += maxLeft - height[l];
//                 }
//                 l++;
//             }
//             else {
//                 if (height[r] >= maxRight){
//                     maxRight = height[r];
//                 }
//                 else {
//                     result += maxRight - height[r];
//                 }

//                 r--;
//             }
//         }

//         return result;
//     }
// };

class Solution{
public:
    int trap(vector<int>& height){
        stack<int> stk;
        int n = height.size(), result = 0;
        for (int i = 0; i < n; i++){
            while(!stk.empty() and height[stk.top()] < height[i]){
                int curr = stk.top();
                stk.pop();
                if (stk.empty()){
                    break;
                }
                int diff = i - stk.top() - 1;
                result += (min(height[stk.top()], height[i]) - height[curr]) * diff;
            }

            stk.push(i);
        }

        return result;
    }
};

int main(){

    return 0;
}