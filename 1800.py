# 1800. Maximum Subarray Sum

from typing import List

class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        maxSum = curSum = nums[0]

        for i in range(1, len(nums)):
            if (nums[i] > nums[i-1]):
                curSum += nums[i]
            else:
                curSum = nums[i]

            maxSum = max(maxSum, curSum)

        return maxSum
    
    def mAS(self, nums: List[int]) -> int:
        temp = nums
        for i in range(1, len(nums)):
            if (nums[i] > nums[i-1]):
                temp[i] += temp[i-1]


        return max(temp)
    

if __name__ == "__main__":
    s = Solution()
    vec = [10, 20, 30, 5, 10, 50]
    print(s.maxAscendingSum(vec))
    print(s.mAS(vec))