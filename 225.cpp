// 225. Implement Stack using Queues
#include <bits/stdc++.h>
using namespace std;

class MyStack {
    int arr[1000];
    int stackTop;
public:
    MyStack() {
        arr[1000] = {0};
        stackTop = -1;
    }
    
    void push(int x) {
        stackTop++;
        arr[stackTop] = x;
    }
    
    int pop() {
        if (empty())
            return -1;
        int temp = arr[stackTop];
        stackTop--;
        return temp;
    }
    
    int top() {
        if (empty())
            return -1;
        return arr[stackTop];
    }
    
    bool empty() {
        return (stackTop == -1);
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

int main(){

    return 0;
}