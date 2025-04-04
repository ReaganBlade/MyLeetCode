# 1669. Merge In Between Linked List

# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution(object):
    def mergeInBetween(self, list1, a, b, list2):
        """
        :type list1: ListNode
        :type a: int
        :type b: int
        :type list2: ListNode
        :rtype: ListNode
        """
        dummy = ListNode()
        dummy.next = list1
        count = 0

        while (list1):
            if (count + 1) == a:
                point_a = list1

            elif count == b:
                point_b = list1.next
                break

            list1 = list1.next
            count += 1

        point_a.next = list2
        
        while (list2.next):
            list2 = list2.next

        list2.next = point_b

        return dummy.next
        