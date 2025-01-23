// 662. Maxium Width of Binary Tree
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
    int widthOfBinaryTree(TreeNode* root) {
        if (!root){
            return 0;
        }

        // implementing the indexing
        long long result = 0;

        queue<pair<TreeNode*, long long>> que;
        que.push({root, 0});

        while(!que.empty()){
            long long size = que.size();
            long long  mmin = que.front().second;

            long long first, last;

            for (int i = 0; i < size; i++){
                long long cur_id = que.front().second - mmin;
                TreeNode* node = que.front().first;
                que.pop();

                if (i == 0) first = cur_id;
                if (i == size - 1) last = cur_id;

                if (node -> left) que.push({node -> left, cur_id * 2});
                if (node -> right) que.push({node -> right, cur_id * 2 + 1});
            }

            result = max(result, last - first + 1);
        }

        return result;
    }
};