// 1261. Find Elements in a Contaminated Binary Tree
#include <bits/stdc++.h>
using namespace std;

//  * Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class FindElements {
map<int, bool> node;
public:
    FindElements(TreeNode* root) {
        queue<pair<TreeNode*, int>> que;
        que.push({root, 0});
        while(que.size() > 0){
            TreeNode* curNode = que.front().first;
            int curVal = que.front().second;
            node[curVal] = true;
            que.pop();


            if (curNode -> left) que.push({curNode -> left, 2 * curVal + 1});
            if (curNode -> right) que.push({curNode -> right, 2 * curVal + 2}); 
        }
    }
    
    bool find(int target) {
        if (node[target]) return true;
        return false;
    }
};
    
/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */