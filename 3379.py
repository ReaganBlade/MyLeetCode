# 3379. Transformed Array
from typing import List

class Solution:
    def constructTransformedArray(self, nums: List[int]) -> List[int]:
        n = len(nums)
        result = [0] * n
        for i in range(n):
            if nums[i] > 0:
                pos = (i + nums[i]) % n -1
                print(f"nums: {i}, pos: {pos}")
                
            else:
                pos = (i + nums[i]) % n

            result[i] = nums[pos]

        return result
    

if __name__ == "__main__":
    nums = [3,-2,1,1]
    result = Solution().constructTransformedArray(nums)
    print(result)