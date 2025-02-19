// 404. Sum of Left Leaves
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


class Solution{
public:
    int sumOfLeftLeaves(TreeNode* root){
        int leftSum = 0;
        queue<pair<TreeNode*, bool>> q;
        q.push({root,false});

        while (!q.empty()){
            TreeNode* curNode = q.front().first;
            bool isLeft = q.front().second;
            
            q.pop();
            if (isLeft){
                if (!curNode -> left and !curNode -> right) leftSum += curNode -> val;
            }
            if (curNode -> left) q.push({curNode -> left, true});
            if (curNode -> right) q.push({curNode -> right, false});
        }

        return leftSum;
    }
};

int main(){
    return 0;
}