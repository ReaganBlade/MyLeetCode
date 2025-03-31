# 203. Remove Linked List Elements
from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        dummy = ListNode()
        dummy.next = head
        current = dummy

        while (current != None and current.next != None):
            if current.next != None and current.next.val == val:
                current.next = current.next.next
            else:
                current = current.next

        return dummy.next

