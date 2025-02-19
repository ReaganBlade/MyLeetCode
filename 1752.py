# 1752. Check if Array is Sorted and Rotated
from typing import List

class Solution:
    def check(self, nums: List[int]) -> bool:
        count = 0
        s = len(nums)

        for i in range(1, s):
            if (nums[i] < nums[i - 1]): count += 1

        if count == 1 and nums[0] >= nums[-1] or count == 0:
            return True
        return False
    

# Optimized Solution Python
"""

from typing import List

class Solution:
    def check(self, nums: List[int]) -> bool:
        count = sum(nums[i] > nums[i + 1] for i in range(len(nums) - 1))
        return count <= 1 and (count == 0 or nums[0] >= nums[-1])

"""
