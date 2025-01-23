// 104. Maximum Depth of Binary Tree
#include <bits/stdc++.h>
using namespace std;


//  * Definition for a binary tree node.
struct Node {
    int val;
    Node *left;
    Node *right;
    Node() : val(0), left(nullptr), right(nullptr) {}
    Node(int x) : val(x), left(nullptr), right(nullptr) {}
    Node(int x, Node *left, Node *right) : val(x), left(left), right(right) {}
};
 
class Solution {
    
public:
    int maxDepth(Node* root) {
        if (!root) return 0;
        
        int leftHeight = maxDepth(root -> left);
        int rightHeight = maxDepth(root -> right);

        return 1 + max(leftHeight, rightHeight);
    }
};

// iterative approach
int height(Node* root){
    if (!root)
        return 0;

    queue<Node*> q;
    q.push(root);

    int height = 0;

    while(!q.empty()){
        int levelSize = q.size();
        height++;

        for (int i = 0; i < levelSize; i++){
            Node* curr = q.front();
            q.pop();

            if (curr -> left) q.push(curr -> left);
            if (curr -> right) q.push(curr -> right);
        }
    }

    return height;
}