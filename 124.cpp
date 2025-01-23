// 124. Maximum Path Sum in Binary Tree
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node *left;
    Node *right;
    Node() : val(0), left(nullptr), right(nullptr) {}
    Node(int x) : val(x), left(nullptr), right(nullptr) {}
    Node(int x, Node *left, Node *right) : val(x), left(left), right(right) {}
};

class Solution {
    int maxSum = INT_MIN;
    int pathSum(Node* root, int& maxSum){
        if (!root){
            return 0;
        }

        int leftSum = max(0, pathSum(root -> left, maxSum));
        int rightSum = max(0, pathSum(root -> right, maxSum));

        maxSum = max(maxSum, root -> val + rightSum + leftSum);

        return (root -> val + max(leftSum, rightSum));
    }
public:
    int maxPathSum(Node* root) {
        pathSum(root, maxSum);
        return maxSum;
    }
};

int main(){

    return 0;
}