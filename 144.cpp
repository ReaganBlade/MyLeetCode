// 144. Binary Tree Preorder Traversal

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

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
    vector<int> result;
public:
    vector<int> preorderTraversal(Node* root) {
        if (!root){
            return;
        }
        else {
            result.push_back(root -> val);
            preorderTraversal(root -> left);
            preorderTraversal(root -> right);
        }

        return result;
    }
};

// Preorder algorithm
/*
void preOrder(TreeNode* root){
    cout << root -> value;
    preOrder(root -> left);
    perOrder(root -> right);
}
*/
