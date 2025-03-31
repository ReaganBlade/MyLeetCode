# 1984. Minimum Difference Between Highest and Lowest of K Scores
from typing import List

class Solution:
    def minimumDifference(self, nums: List[int], k: int) -> int:
        new_list = sorted(nums)
        if len(nums) < 2:
            return 0


        min_diff = max(nums)
        for i in range(len(nums) - k + 1):
            diff = abs(nums[i] - nums[i + k - 1])
            min_diff = min(min_diff, diff)

        return min_diff