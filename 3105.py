# 3105. Longest Strictly Increasing or Strictly Decreasing Subarray
from typing import List


# Brute Force Algorithm
'''
class Solution:
    def longestMonotonicSubarray(self, nums: List[int]) -> int:
        max_len = 0
        for i in range(len(nums)):
            cur_length = 1
            for j in range(i+1, len(nums)):
                if (nums[j] > nums[j-1]):
                    cur_length += 1
                else: 
                    break

            max_len = max(max_len, cur_length)

        for i in range(len(nums)):
            cur_length = 1
            for j in range(i+1, len(nums)):
                if (nums[j] < nums[j-1]): 
                    cur_length += 1
                else: 
                    break

            max_len = max(max_len, cur_length)

        return max_len
'''

class Solution:
    def longestMonotonicSubarray(self, nums: List[int]) -> int:
        inc_length = dec_length = max_length = 1

        for pos in range(len(nums) - 1):
            if nums[pos + 1] > nums[pos]:
                inc_length += 1
                dec_length = 1

            elif nums[pos+1] < nums[pos]:
                dec_length += 1
                inc_length = 1
            else:
                inc_length = dec_length = 1

            max_length = max(max_length, inc_length, dec_length)


        return max_length