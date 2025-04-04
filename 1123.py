# 1123. Lowest Common Ancestor of Deepest Leaves
from typing import Optional
from queue import deque

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:

    visited = {}

    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
        if root in self.visited:
            return self.visited[root];
        
        self.visited[root] = max(self.maxDepth(root.left), self.maxDepth(root.right)) + 1

        return self.visited[root]

    def lcaDeepestLeaves(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        
        # using breadth-first search
        while (self.maxDepth(root.left) != self.maxDepth(root.right)):
            if (self.maxDepth(root.left) < self.maxDepth(root.right)):
                root = root.right
            else:
                root = root.left

        return root
            