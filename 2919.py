# 2919. Minimum Increment Operations to Make Array Beautiful
from typing import List

class Solution:
    def minIncrementOperations(self, nums: List[int], k: int) -> int:
        n = len(nums)

        dp = [0] * (n + 1)

        dp[0] = max(0, k - nums[0])
        dp[1] = max(0, k - nums[1])
        dp[2] = max(0, k - nums[2])

        for i in range(3, n):
            dp[i] = max(0, k - nums[i]) + min(dp[i - 1], dp[i - 2], dp[i - 3])

        return min(dp[n-1], dp[n-2], dp[n-3])