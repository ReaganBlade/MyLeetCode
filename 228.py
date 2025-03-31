# 228. Summary Ranges
from typing import List

class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        start = end = nums[0]
        result = []

        for i in range(1, len(nums)):
            if nums[i] == end + 1:
                end = nums[i]

            else:
                result.append(str(start) if start == end else f"{start}->{end}")

                start = end = nums[i]

        result.append(str(start) if start == end else f"{start}->{end}")

        return result