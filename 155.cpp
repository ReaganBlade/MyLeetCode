// 155. Min Stack
#include <bits/stdc++.h>
using namespace std;

// Using double stacks
class MinStack {
    stack<int> original;
    stack<int> minStack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if (original.empty()){
            original.push(val);
            minStack.push(val);
            return;
        }
        original.push(val);
        int mini = min(val, minStack.top());
        minStack.push(mini);
        return;
    }
    
    void pop() {
        if (original.empty()) return;
        original.pop();
        minStack.pop();
    }
    
    int top() {
        if (original.empty()) return -1;

        return original.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};

/*
class MinStack {
    stack<int> Stack;
    int mini = INT_MAX;
public:
    MinStack() {

    }
    
    void push(int val) {
        // for first element
        if (Stack.empty()){
            Stack.push(val);
            mini = val;
        } else {
            if (val < mini){
                Stack.push(2 * val - mini);
                mini = val;
            } else {
                Stack.push(val);
            }
        }
    }
    
    void pop() {
        // if (Stack.empty()) return -1;

        int current = Stack.top();
        Stack.pop();

        if (current > mini){
            // return current;
        } else {
            int prevMin = mini;
            int val = 2 * mini - current;

            mini = val;
            // return prevMin;
        }
    }
    
    int top() {
        if (Stack.empty()) return -1;

        int curr = Stack.top();
        if (curr < mini){
            return mini;
        } else {
            return curr;
        }
    }
    
    int getMin() {
        return mini;
    }
};

*/



class MinStack {
  stack < long long > st;
  long long mini;
  public:
    MinStack() {
      while (st.empty() == false) st.pop();
      mini = INT_MAX;
    }

  void push(int value) {
    long long val = value;
    if (st.empty()) {
      mini = val;
      st.push(val);
    } else {
      if (val < mini) {
        st.push(2 *val*1LL - mini);
        mini = val;
      } else {
        st.push(val);
      }
    }
  }

  void pop() {
    if (st.empty()) return;
    long long el = st.top();
    st.pop();

    if (el < mini) {
      mini = 2 * mini - el;
    }
  }

  int top() {
    if (st.empty()) return -1;

    long long el = st.top();
    if (el < mini) return mini;
    return el;
  }

  int getMin() {
    return mini;
  }
};


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main(){

    return 0;
}