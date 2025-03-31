# 222. Count Complete Tree Nodes
from collections import Optional

class TreeNode:
    def __init__(self, val = 0, left = None, right = None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def count(self, node: Optional[TreeNode]) -> int:
        if (node == None):
            return 0
        
        n = self.count(node.left)
        n = n + self.count(node.right)

        n += 1
        return n
    
    def countNodes(self, root: Optional[TreeNode]) -> int:
        if (root == None):
            return 0
        
        result = self.count(root)
        return result