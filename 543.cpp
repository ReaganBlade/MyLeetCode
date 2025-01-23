// 543. Diameter of Binary Tree
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
    int diameter = 0;
    int findDiameter(Node* node, int& diameter){
        if (!node){
            return 0;
        }
        int lh = findDiameter(node -> left, diameter);
        int rh = findDiameter(node -> right, diameter);

        diameter = max(diameter, lh + rh);
        return 1 + max(lh, rh);
    }
public:
    int diameterOfBinaryTree(Node* root) {
        findDiameter(root, diameter);
        return diameter;
    }
};

int main(){
    return 0;
}