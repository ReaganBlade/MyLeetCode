# 111. Minimum Depth of Binary Tree
from collections import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def calcDepth(self, node: Optional[TreeNode]) -> int:
        if node == None:
            return 0
        
        if node.left != None and node.right == None:
            return self.calcDepth(node.left) + 1
        
        if node.right != None and node.left == None:
            return self.calcDepth(node.right) + 1
        
        lh = self.calcDepth(node.left)
        rh = self.calcDepth(node.right)

        return min(lh, rh) + 1
    

    def minDepth(self, root: Optional[TreeNode]) -> int:
        return self.calcDepth(root)