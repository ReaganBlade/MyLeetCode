# 2874. Maximum Value of an Ordered Triplet II

from typing import List

# Prefix solution
# class Solution:
#     def maximumTripletValue(self, nums: List[int]) -> int:
#         if len(nums) < 3:
#             return 0
        
#         max_triplet = 0

#         for i in range(2, len(nums)):
#             last = nums[0]

#             for j in range(1, i):
#                 max_triplet = max(max_triplet, (last - nums[j]) * nums[i])
#                 last = max(last, nums[j])

#         return max_triplet


# Greedy + prefix

class Solution:
    def maximumTripletValue(self, nums: List[int]) -> int:
        n = len(nums)

        leftMax = [0] * n
        rightMax = [0] * n

        for i in range(1, n):
            leftMax[i] = max(leftMax[i - 1], nums[i - 1])
            rightMax[n - 1 - i] = max(rightMax[n - i], nums[n - i])

        res = 0

        for j in range(1, n - 1):
            res = max(res, (leftMax[j] - nums[j]) * rightMax[j])

        return res