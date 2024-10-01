// 84. Largest Rectangle in Histogram
#include <bits/stdc++.h>
using namespace std;

// class Solution{
// public:
//     int largestRectangleArea(vector<int>& heights){
//         stack<int> mStack;
//         int n = heights.size();
//         int recArea = INT_MIN;

//         for (int i = 0; i < n; i++){
//             if (!mStack.empty()){
//                 mStack.push(heights[i]);
//             }
//             else if (mStack.top() > heights[i] || i == (n - 1)){
//                 int minHeight = INT_MAX;
//                 int width = 0;
//                 int area;
//                 while(!mStack.empty()){
//                     minHeight = min(heights[i], minHeight);
//                     width++;
//                     mStack.pop();
//                 }

//                 area = minHeight * width;

//                 recArea = max(recArea, area);
//             }
//         }

//         return recArea;
//     }
// };


// class Solution{
// public:
//     int largestRectangleArea(vector<int>& heights){
//         stack<int> mStack;
//         int n = heights.size();
//         int recArea = 0;

//         for (int i = 0; i <= n; i++){
//             int h = (i == n) ? 0: heights[i];

//             while(!mStack.empty() && h < heights[mStack.top()]){
//                 int height = heights[mStack.top()];
//                 mStack.pop();
//                 int width = mStack.empty() ? i: i - mStack.top() - 1;
//                 recArea = max(recArea, height * width);
//             }

//             mStack.push(i);
//         }

//         return recArea;
//     }
// };

class Solution{
public:
    int largestRectangleArea(vector<int>& heights){
        stack<int> mStack;

        int n = heights.size();
        int maxArea = INT_MIN;

        for (int i = 0; i < n; i++){

            while (!mStack.empty() && mStack.top() > heights[i]){
                int height = mStack.top();
                mStack.pop();

                int width = mStack.empty() ? i: 
            }
        }
    }
};

int main(){

    return 0;
}