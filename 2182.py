# 2182. Merge Nodes in Between Zeroes

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode(0)
        curr = dummy

        sum = 0
        while(head):
            if head.val == 0 and sum != 0:
                newNode = ListNode(sum)
                curr.next = newNode
                curr = curr.next
                sum = 0
            else:
                sum += head.val

            head = head.next

        return dummy.next
