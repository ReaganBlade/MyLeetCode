# 1749. Maximum Absolute Sum of Any Subarray
from typing import List

class Solution:
    def maxAbsoluteSum(self, nums: List[int]) -> int:
        maxSum = minSum = 0
        curMaxSum = curMinSum = 0
        
        for i in range(len(nums)):
            curMaxSum += nums[i]
            curMinSum += nums[i]

            maxSum, minSum = max(maxSum, curMaxSum), min(minSum, curMinSum)
            if curMaxSum < 0:
                curMaxSum = 0
            if curMinSum > 0:
                curMinSum = 0
        
        return max(abs(maxSum), abs(minSum))

if __name__ == '__main__':
    
    s = Solution()
    # arr = [1,-3,2,3,-4]
    arr = [2,-5,1,-4,3,-2]
    res = s.maxAbsoluteSum(arr)
    print(res)