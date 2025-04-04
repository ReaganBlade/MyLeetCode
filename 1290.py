# 1290. Convert Binary Number in a Linked List to Integer

# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution(object):
    def getDecimalValue(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: int
        """
        res = ''
        while (head):
            res += str(head.val)
            head = head.next

        return int(res, 2)