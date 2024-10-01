// 1921. Eliminate Maximum Number of Monsters
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed){
        priority_queue<float, vector<float>, greater<float>> heap;

        for( int i = 0; i < dist.size(); i++ ){
            heap.push((float) dist[i] / speed[i]);
        }

        int result = 0;
        while(!heap.empty()){
            if (heap.top() <= result){
                break;
            }

            result;
            heap.pop();
        }

        return result;
    }
};

int main(){

    vector<int> d {1,3,4};
    vector<int> s {1, 1, 1};

    Solution *s = new Solution;
    cout << s -> eliminateMaximum(d, s) << endl;

    return 0;
}