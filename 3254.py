# 3254. Find the Power of K-Size Subarrays I
from collections import List

# class Solution:
#     def resultsArray(self, nums: List[int], k: int) -> List[int]:
#         l = len(nums)
#         result = [-1] * (l - k + 1)

#         for start in range(len - k):
#             isSorted = True

#             for i in range(start, start + k - 1):
#                 if (nums[i+1] != nums[i] + 1):
#                     isSorted = False
#                     break

#             if isSorted:
#                 result[start] = nums[start + k - 1]
        
#         return result

# Optimal Using Counter
class Solution:
    def resultsArray(self, nums: List[int], k: int) -> List[int]:
        if k == 1:
            return nums
        
        l = len(nums)
        result = [-1] * (l - k + 1)
        consecutive_count = 1

        for start in range(l - 1):
            if nums[start] + 1 == nums[start + 1]:
                consecutive_count += 1
            else:
                consecutive_count = 1

            if consecutive_count >= k:
                result[start - k + 2] = nums[start + 1]

        return result; 
