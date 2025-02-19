# 404. Sum of Left Leaves

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right



class Solution:
    def sumOfLeftLeaves(self, root: TreeNode) -> int:
        leftSum = 0
        queue = []
        queue.append([root, False])

        while(len(queue) > 0):
            print(queue[0])
            curNode = queue[0][0]
            isLeft = queue[0][1]
            queue.pop(0)
            if (isLeft):
                if (not curNode.left and not curNode.right):
                    leftSum += curNode.val

            if (curNode.left): queue.append([curNode.left, True])
            if (curNode.right): queue.append([curNode.right, False])

        return leftSum
    
    