from typing import List

# class Solution:
#     def isArraySpecial(self, nums: List[int]) -> bool:
#         if (len(nums) == 1): return True

#         for i in range(1, len(nums)):
#             if (nums[i] - nums[i-1]) == 0: return False

#         return True
    
class Solution:
    def isArraySpecial(self, nums: List[int]) -> bool:
        return all((nums[i] - nums[i-1]) % 2 != 0 for i in range(1, len(nums)))



if __name__ == "__main__":
    numbers = [2,1,4]
    s = Solution()

    result = s.isArraySpecial(numbers)
    print(result)