# 2401. Longest Nice Subarray
from typing import List

class Solution:
    def longestNiceSubarray(self, nums: List[int]) -> int:
        curr_bits = 0
        left = 0
        max_len = 0

        for right in range(len(nums)):
            while curr_bits & nums[right] != 0:
                curr_bits ^= nums[left]
                left += 1

            curr_bits |= nums[left]

            max_len = max(max_len, right - left + 1)

        return max_len

class Solution:
    def longestNiceSubarray(self, nums: list[int]) -> int:
        curr_bits = 0
        left = 0
        max_len = 0

        for right in range(len(nums)):
            while curr_bits & nums[right] != 0:
                curr_bits ^= nums[
                    left
                ]
                left += 1

            curr_bits |= nums[right]

            max_len = max(max_len, right - left + 1)

        return max_len