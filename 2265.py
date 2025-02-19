# 2265. Count Nodes Equal to Average of Subtree
from typing import List

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:

    def __init__(self):
        self.count = 0

    def postOrder(self, root: TreeNode):
        if (not root):
            return [0, 0]
        
        left = self.postOrder(root.left)
        right = self.postOrder(root.right)

        nodeSum = left[0] + right[0] + root.val
        nodeCount = left[1] + right[1] + 1

        if root.val == (nodeSum // nodeCount):
            self.count += 1

        return [nodeSum, nodeCount]

    def averageOfSubtree(self, root: TreeNode) -> int:
        self.postOrder(root)

        return self.count