# 219. Contains Duplicate II
from typing import List
from collections import defaultdict

class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        nums_dict = defaultdict()

        for i in range(len(nums)):
            if nums[i] in nums_dict:
                if i - nums_dict[nums[i]] <= k:
                    return True
                
            nums_dict[nums[i]] = i
            
        return False