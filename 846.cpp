// 846. Hand of Straights
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size() % groupSize != 0){
            return false;
        }

        sort(hand.begin(), hand.end(), greater());

        while(!hand.empty()){
            int top = hand.back();
            int i = 1;
            stack<int> s;
            hand.pop_back();
            while(i < groupSize && !hand.empty()){
                int curr = hand.back();
                hand.pop_back();

                if (curr == top + i)
                    i++;
                else if (curr = top + i - 1)
                    s.push(curr);
                else
                    return false;
            }

            if (i != groupSize)
                return false;
            while(!s.empty()){
                hand.push_back(s.top());
                s.pop();
            }
        }

        return true;
    }
};

int main(){

    return 0;
}