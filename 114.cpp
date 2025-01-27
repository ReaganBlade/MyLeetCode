// 114. Flatten Binary Tree to Linked List
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

// class Solution {
//     vector<int> nodes;

//     void Traverse(TreeNode* root){
//         if (!root) return;

//         nodes.push_back(root -> val);
//         Traverse(root -> left);
//         Traverse(root -> right);
//     }
// public:
//     void flatten(TreeNode* root) {
//         Traverse(root);

//         TreeNode* dummy = new TreeNode(-1);
//         TreeNode* cur = dummy;

//         for (int i = 0; i < nodes.size(); i++){
//             cur -> right = new TreeNode(nodes[i]);
//             cur = cur -> right;
//         }

//         root = dummy -> right;
//     }
// };


class Solution {
public: 
    void flatten(TreeNode* root) {
        if (!root) return;

        flatten(root->left);
        flatten(root->right);

        TreeNode* temp = root->right;

        root->right = root->left;
        root->left = nullptr;

        TreeNode* head = root;
        while (head->right) {
            head = head->right;
        }
        
        head->right = temp;
    }
};
