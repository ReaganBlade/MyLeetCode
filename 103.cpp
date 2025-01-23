// 103. Binary Tree Zigzag Level Order Traversal
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
public:
    vector<vector<int>> zigzagLevelOrder(Node* root) {
        vector<vector<int>> result;
        if (root == NULL){
            return result;
        }

        queue<Node*> nodeQue;
        nodeQue.push(root);

        bool leftToRight = true;

        while(!nodeQue.empty()) {
            int size = nodeQue.size();
            vector<int> row(size);

            for (int i = 0; i < size; i++){
                Node* node = nodeQue.front();
                nodeQue.pop();

                // find position to fill node's value
                int index = (leftToRight) ? i: (size - 1 - i);

                row[index] = node -> val;
                if (node -> left){
                    nodeQue.push(node -> left);
                }

                if (node -> right){
                    nodeQue.push(node -> right);
                }
            }

            leftToRight = !leftToRight;
            result.push_back(row);
        }

        return result;
    }
};

int main(){

    return 0;
}