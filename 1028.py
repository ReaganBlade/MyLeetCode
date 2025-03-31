# 1028. Recover a Tree From Preorder Traversal
from collections import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# Using recursion
# class Solution:
#     def __init__(self):
#         self.index = 0

#     def recoverFromPreorder(self, traversal: str) -> Optional[TreeNode]:
#         return self.helper(traversal, 0)
    
#     def helper(self, traversal, depth):
#         if self.index >= len(traversal):
#             return None
        
#         dash_count = 0
#         while(self.index + dash_count < len(traversal)
#               and traversal[self.index + dash_count] == '-'):
#             dash_count += 1

#         if dash_count != depth:
#             return None
        
#         self.index += dash_count

#         # Extract the node value
#         value = 0
#         while self.index < len(traversal) and traversal[self.index].isdigit():
#             value = value * 10 + int(traversal[self.index])
#             self.index += 1

#         node = TreeNode(value)

#         node.left = self.helper(traversal, depth + 1)
#         node.right = self.helper(traversal, depth + 1)

#         return node

# Approach 2: Iterative With Stack
class Solution:
    def recoverFromPreorder(self, traversal: str) -> Optional[TreeNode]:
        stack = []
        index = 0

        while index < len(traversal):
            depth = 0
            while index < len(traversal) and traversal[index] == '-':
                depth += 1
                index += 1

            value = 0
            while index < len(traversal) and traversal[index].isdigit():
                value = value * 10 + int(traversal[index])
                index += 1

            node = TreeNode(value)

            while len(stack) > depth:
                stack.pop()

            if stack:
                if stack[-1].left is None:
                    stack[-1].left = node

                else:
                    stack[-1].right = node
            
            stack.append(node)

        return stack[0]