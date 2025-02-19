# 1144. Decrease Elements To Make Array Zigzag
from typing import List

class Solution:
    def movesToMakeZigzag(self, nums: List[int]) -> int:
        n = len(nums)
        even = 0
        odd = 0

        for i in range(n):
            left = nums[i - 1] if i > 0 else float('inf')
            right = nums[i + 1] if i < n - 1 else float('inf')

            min_neighbor = min(left, right)

            if nums[i] >= min_neighbor:
                if nums[i] % 2 == 0:
                    even += (nums[i] - min_neighbor + 1)
                else:
                    odd += (nums[i] - min_neighbor + 1)

        return min(even, odd)

class Solution:
    def movesToMakeZigzag(self, nums: List[int]) -> int:
        n = len(nums)
        even = 0
        odd = 0

        for i in range(n):
            left = nums[i - 1] if i > 0 else float('inf')
            right = nums[i + 1] if i < n - 1 else float('inf')

            min_neighbor = min(left, right)

            if nums[i] >= min_neighbor:
                if i % 2 == 0:
                    even += (nums[i] - min_neighbor + 1)
                else:
                    odd += (nums[i] - min_neighbor + 1)

        return min(even, odd)