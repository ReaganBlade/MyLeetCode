// 232. Implement Queue using Stacks
#include <bits/stdc++.h>
using namespace std;

class MyQueue {
    vector<int> input;
    vector<int> output;
public:
    MyQueue() {

    }
    
    void push(int x) {
        input.push_back(x);
    }
    
    int pop() {

        if (empty()) return -1;

        int s = input.size() - 1;
        while(s >= 0){
            output.push_back(input[s]);
            s--;
        }
        s = output.size() - 1;
        int temp = output[s];
        output.pop_back();

        return temp;
    }
    
    int peek() {
        if (empty()) return -1;

        int s = input.size() - 1;
        if (s > 0){
            while(s >= 0){
                output.push_back(input[s]);
                s--;
            }
        }

        int o = output.size() - 1;
        return output[o];
    }
    
    bool empty() {
        return (input.size() == 0 && output.size() == 0);
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

int main(){

    return 0;
}