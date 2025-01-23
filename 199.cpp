// 199. Binary Tree Right Side View
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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if (!root){
            return result;
        }

        queue<pair<TreeNode*, int>> que;
        map<int, int> mp;

        que.push({root, 0});
        while(!que.empty()){
            auto it = que.front();
            que.pop();

            TreeNode* node = it.first;
            int level = it.second;

            mp[level] = node -> val;

            if (node -> left){
                que.push({node -> left, level + 1});
            }
            if (node -> right){
                que.push({node -> right, level + 1});
            }
        }

        for (auto it: mp){
            result.push_back(it.second);
        }

        return result;
    }
};

int main(){

    return 0;
}