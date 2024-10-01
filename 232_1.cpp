// 232. Implement Queue using Stacks
#include <bits/stdc++.h>
using namespace std;

class MyQueue {
    stack<int> input;
    stack<int> output;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        int temp;
        while(!input.empty()){
            temp = input.top();
            output.push(temp);
            input.pop();
        }

        output.pop();
        int last = temp;
        while(!output.empty()){
            temp = output.top();
            output.pop();
            input.push(temp);
        }

        return last;
    }
    
    int peek() {
        int temp;
        while(!input.empty()){
            temp = input.top();
            output.push(temp);
            input.pop();
        }

        int last = temp;
        while(!output.empty()){
            temp = output.top();
            output.pop();
            input.push(temp);
        }

        return last;
    }
    
    bool empty() {
        return input.empty();
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