# 220. Contains Duplicate III
from typing import List

class Solution:
    def containsNearbyAlmostDuplicate(self, nums: List[int], indexDiff: int, valueDiff: int) -> bool:
        left = 0
        for right in range(len(nums)):
            cid = abs(right - left)
            cvd = abs(nums[right] - nums[left])
            if cid <= indexDiff and cvd <= valueDiff:
                return True
            
            elif cid > indexDiff:
                while abs(right - left) >= indexDiff:
                    left += 1

        return False