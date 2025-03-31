# 209. Minimum Size Subarray Sum
from typing import List

class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        left = right = 0
        currentSum = 0

        cur_len = float('inf')

        for right in range(len(nums)):
            currentSum += nums[right]

            while currentSum >= target:
                cur_len = min(cur_len, right - left + 1)
                currentSum -= nums[left]
                left += 1
        
        return cur_len if cur_len != float('inf') else 0