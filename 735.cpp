// 735. asterioid collision
#include <bits/stdc++.h>
using namespace std;

// Wrong Solution
// class Solution {
// public:
//     vector<int> asteroidCollision(vector<int>& asteroids) {
//         stack<int> stk;
//         int n = asteroids.size();
//         vector<int> result;
//         for (int i = 0; i < n; i++){
//             if (stk.empty() || (stk.top() < 0 && asteroids[i] > 0)){
//                 stk.push(asteroids[i]);
//             }
//             else {
//                 while(!stk.empty() and stk.top() + asteroids[i] <= 0){
//                     stk.pop();
//                 }

//                 if (stk.empty() || (stk.top() < 0 && asteroids[i] < 0) || asteroids[i] > 0){
//                     stk.push(asteroids[i]);
//                 }
//             }
//         }

//         while(!stk.empty()){
//             result.insert(result.begin(), stk.top());
//             stk.pop();
//         }

//         return result;
//     }
// };


class Solution{
private:
    void check(int num, vector<int> stk){
        if (num >= 0){
            stk.push_back(num);
        }
        else if (num < 0 && stk.size() == 0){
            stk.push_back(num);
        }
        else if (num < 0 && stk.back() < 0){
            stk.push_back(num);
        }
        else {
            int temp = stk.back();
            stk.pop_back();
            if (abs(num) < abs(temp)){
                check(num, stk);
            } else if (abs(temp) > abs(num)){
                stk.push_back(temp);
            }
        }
    }
public:
    vector<int> asteroidCollision(vector<int>& asteroids){
        vector<int> result;
        int n = asteroids.size();

        for(int i = 0; i < n; i++){
            check(asteroids[i], result);
        }

        return result;
    }
};

int main(){

    return 0;
}