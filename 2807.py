# Insert Greatest Common Divisors in Linked List
from typing import Optional
from math import gcd

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def insertGreatestCommonDivisors(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode()
        dummy.next = head

        while(head.next):
            x = head.val
            y = head.next.val

            g = gcd(x, y)
            newNode = ListNode(g)
            newNode.next = head.next
            head.next = newNode

            head = newNode.next

        return dummy.next


