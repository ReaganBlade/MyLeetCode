// 3100. Water Bottles II
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int result = 0;
        int bottles = numBottles;

        while(numBottles >= numExchange){
            numBottles -= numExchange - 1;
            numExchange++;
            result++;
        }

        return bottles + result;
    }
};

int main(){

    return 0;
}