# 1413. Minimum Value to Get positive Step by Step Sum
from typing import List


class Solution:
    def minStartValue(self, nums: List[int]) -> int:
        startValue = 0
        curr = 0
        size = len(nums)

        for i in range(size):
            if curr + nums[i] < 0:
                startValue += abs(curr + nums[i]) + 1

        return startValue