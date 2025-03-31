# 350. Intersection of Two Arrays II
from typing import List

class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        result = []

        for i in nums2:
            if i in nums1:
                result.append(i)
                nums1.remove(i)

        return result