// 100. Same Tree
#include <bits/stdc++.h>
using namespace std;


struct Node {
    int val;
    Node *left;
    Node *right;
    Node() : val(0), left(nullptr), right(nullptr) {}
    Node(int x) : val(x), left(nullptr), right(nullptr) {}
    Node(int x, Node *left, Node *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSameTree(Node* p, Node* q) {
        if (!p || !q) {
            return (p == q);
        }

        return (p -> val == q -> val) && isSameTree(p -> left, q -> left) && isSameTree(p -> right, q -> right);
    }
};

int main(){

    return 0;
}