// 450. Delete Node in a BST
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
    TreeNode* getMin(TreeNode* node){
        while(node -> left){
            node = node -> left;
        }

        return node;
    }
    
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return root;

        if (key < root -> val){
            root -> left = deleteNode(root -> left, key);
        } else if (key > root -> val){
            root -> right = deleteNode(root -> right, key);
        } else {
            if (!root -> left && !root -> right){
                delete root;
                return nullptr;
            } else if (!root -> left || !root -> right){
                TreeNode* child = root -> left ? root -> left : root -> right;
                delete root;
                return child;
            } else {
                TreeNode* successor = getMin(root -> right);
                root -> val = successor -> val;
                root -> right = deleteNode(root -> right, successor -> val);
            }
        }

        return root;
    }
};

int main(){

    return 0;
}