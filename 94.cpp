// 94. Binary Tree Inorder Traversal
#include <bits/stdc++.h>
using namespace std;

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
    vector<int> inorderTraversal(Node* root) {
        if (!root){
            return {};
        } else {
            inorderTraversal(root -> left);
            result.emplace_back(root -> val);
            inorderTraversal(root -> right);
        }

        return result;
    }
};

int main(){

    return 0;
}