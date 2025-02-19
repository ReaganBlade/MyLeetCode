// 1008. Construct Binary Search Tree from Preorder Traversal
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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = new TreeNode(preorder[0]);

        for (int i = 1; i < preorder.size(); i++){
            TreeNode* curr = root;

            while(curr){
                if (preorder[i] < curr -> val){
                    if (!curr -> left) {
                        curr -> left = new TreeNode(preorder[i]);
                        break;
                    }

                    else curr = curr -> left;
                } else {
                    if (!curr -> right) {
                        curr -> right = new TreeNode(preorder[i]);
                        break;
                    }
                    else curr = curr -> right;
                }
            }
        }

        return root;
    }
};


int main(){

    return 0;
}