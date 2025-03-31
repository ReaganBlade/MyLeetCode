// 2079. Watering Plants
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps = 1;
        int dist = 1;
        int cur_capacity = capacity;

        for (int i = 0; i < plants.size() - 1; i++){
            cur_capacity -= plants[i];
            if (cur_capacity < plants[i + 1]){
                steps += dist * 2 + 1;
                cur_capacity = capacity;
                dist += 1;
                // steps += dist;
            } else {
                steps += 1;
                dist += 1;
            }
        }

        return steps;
    }
};

int main(){

    return 0;
}