# 2873. Maximum value of an Ordered Triplet

from typing import List

# # Brute force Solution
# class Solution:
#     def maximumTripletValue(self, nums: List[int]) -> int:
#         n = len(nums)
#         res = 0
#         for i in range(n):
#             for j in range(i + 1, n):
#                 for k in range(j + 1, n):
#                     res = max(res, (nums[i] - nums[j]) * nums[k])
#         return res


# max prefix solution
class Solution:
    def maximumTripletValue(self, nums: List[int]) -> int:
        if len(nums) < 3:
            return 0
        
        max_triplet = 0

        for i in range(2, len(nums)):
            last = nums[0]
            for j in range(1, i):
                max_triplet = max(max_triplet, (last - nums[j]) * nums[i])
                last = max(last, nums[j])


        return max_triplet

