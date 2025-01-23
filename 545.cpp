// 545. Boundary of Binary Tree
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;
    Node(int val) {
        this->data = val;
        this->left = this->right = NULL;
    }
};

class Solution {
    bool isLeaf(Node* root){
        return (root -> left == nullptr and root -> right == nullptr);
    }

    void addLeftBoundary(Node* root, vector<int> &res){
        Node* cur = root -> left;

        while (cur) {
            if (!isLeaf(cur)) res.push_back(cur -> data);
            if (cur -> left) cur = cur -> left;
            else cur = cur -> right;
        }
    }

    void addRightBoundary(Node* root, vector<int>& res) {
        Node* cur = root -> right;
        vector<int> temp;

        while(cur) {
            if (!isLeaf(cur)) temp.push_back(cur -> data);
            if (cur -> right) cur = cur -> right;
            else cur = cur -> left;
        }

        for (int i = temp.size() - 1; i >= 0; i--){
            res.push_back(temp[i]);
        }
    }

    void addLeaves(Node* root, vector<int>& res){
        if (isLeaf(root)){
            res.push_back(root -> data);
            return ;
        }

        if (root -> left) addLeaves(root -> left, res);
        if (root -> right) addLeaves(root -> right, res);
    }
public:
    /**
     * @param root: a TreeNode
     * @return: a list of integer
     */
    vector<int> boundaryOfBinaryTree(Node *root) {
        // write your code here
        vector<int> res;
        if (!root) return res;
        if (!isLeaf(root)) res.push_back(root -> data);
        addLeftBoundary(root, res);
        addLeaves(root, res);
        addRightBoundary(root, res);

        return res;
    }
};


int main(){

    return 0;
}