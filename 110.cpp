// 110. Balanced Binary Tree
#include <bits/stdc++.h>
using namespace std;


// * Definition for a binary tree node.
struct Node {
    int val;
    Node *left;
    Node *right;
    Node() : val(0), left(nullptr), right(nullptr) {}
    Node(int x) : val(x), left(nullptr), right(nullptr) {}
    Node(int x, Node *left, Node *right) : val(x), left(left), right(right) {}
};

class Solution {
    int height(Node* node){
        if (!node) return 0;
        
        int leftHeight = height(node -> left);
        int rightHeight = height(node -> right);

        if (leftHeight == -1 || rightHeight == -1 || abs(leftHeight - rightHeight) > 1)
            return -1;

        return 1 + max(leftHeight, rightHeight);
    }
public:
    bool isBalanced(Node* root) {
        return height(root) != -1;
    }
};