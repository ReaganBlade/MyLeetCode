// 108. Convert Sorted Array to Binary Search
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
        Node* helper(vector<int>& nums, int start, int end){
        if (start > end) return NULL;

        int mid = (start + end) / 2;
        Node* root = new Node(nums[mid]);

        root -> left = helper(nums, start, mid - 1);
        root -> right = helper(nums, mid + 1, end);

        return root;
    }
public:
    Node* sortedArrayToBST(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;

        return helper(nums, start, end);
    }
};

int main(){

    return 0;
}