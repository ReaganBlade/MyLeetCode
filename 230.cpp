// 230. Kth Smallest Element in a BST

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
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> nodes;

        queue<TreeNode*> que;
        que.push(root);

        while(!que.empty()){
            TreeNode* curNode = que.front();
            que.pop();

            nodes.push_back(curNode -> val);

            if (curNode -> left) que.push(curNode -> left);
            if (curNode -> right) que.push(curNode -> right);
        }

        sort(nodes.begin(), nodes.end());

        return nodes[k-1];
    }
};
