# 1261. Find Elements in a Contaminated Binary Tree
from collections import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class FindElements:

    def __init__(self, root: Optional[TreeNode]):
        self.root = root
        self.nodes = self.recover_tree()

    def recover_tree(self):
        queue = []
        nodes = []
        cur = 0
        queue.append((self.root, cur))
        while(len(queue) > 0):
            cur_node = queue[0][0]
            cur_val = queue[0][1]
            queue.pop(0)
            nodes.append(cur_val)

            if (cur_node.left): queue.append((cur_node.left, 2*cur_val + 1))
            if (cur_node.right): queue.append((cur_node.right, 2*cur_val + 2))

        return nodes
        

    def find(self, target: int) -> bool:
        return target in self.nodes


        


# Your FindElements object will be instantiated and called as such:
# obj = FindElements(root)
# param_1 = obj.find(target)