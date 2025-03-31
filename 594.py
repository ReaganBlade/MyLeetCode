# 594. Longest Harmonious Subsequence
from typing import List



class Solution:
    def findLHS(self, nums: List[int]) -> int:
        if max(nums) == min(nums):
            return 0
        nums = sorted(nums)
        print(nums)
        harmony_len = 0
        left = 0
        for right in range(1, len(nums)):
            if nums[right] - nums[left] > 1:
                while(nums[right] - nums[left] > 1):
                    left += 1
            else:
                harmony_len = max(harmony_len, right - left + 1)

        return harmony_len
    

if __name__ == '__main__':
    
    s = Solution()
    # arr = [1,3,5,7,9,11,13,15,17]
    arr = [1,4,1,3,1,-14,1,-13]
    result = s.findLHS(arr)
    print(result)