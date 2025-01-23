// Level Order Traversal
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    node* left;
    node* right;
};

void lvlOrderTraversal(node* root){

    queue<node*> que;
    node* curr = root;
    while(curr){
        if (curr -> left) que.push(curr -> left);
        if (curr -> right) que.push(curr -> right);

        
    }
}




int main(){

    return 0;
}