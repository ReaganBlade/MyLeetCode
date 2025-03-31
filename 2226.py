# 2225. Maximum Candies allocated to K children

from typing import List

class Solution:
    def allocatedCandies(self, candies, k, numOfCandies) -> bool:
        maxChildren = 0

        for i in candies:
            maxChildren += i // numOfCandies

        return maxChildren >= k

    def maximumCandies(self, candies: List[int], k: int) -> int:
        candies.sort()
        maxCandies = candies[-1]
        low, high = 0, maxCandies

        while low < high:
            mid = (low + high + 1) // 2

            if self.allocatedCandies(candies, k, mid):
                low = mid

            else:
                high = mid - 1

        return low