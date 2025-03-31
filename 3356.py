# 3356. Zero Array Transformation II
from typing import List

# Naive Solution
class Solution:
    def minZeroArray(self, nums: List[int], queries: List[List[int]]) -> int:

        count = 0
        
        for i in queries:
            if sum(nums) == 0:
                break

            for j in range(len(nums)):
                if (i[0] <= j) and (j <= i[1]):
                    nums[j] = (nums[j] - i[2]) if (nums[j] > i[2]) else 0

            count += 1

        return count if sum(nums) == 0 else -1


class Solution:
    def minZeroArray(self, nums: List[int], queries: List[List[int]]) -> int:
        count = 0
        n = len(nums)
        
        for l, r, val in queries:
            if all(x == 0 for x in nums):  # Stop early when nums is zero
                return count

            for j in range(l, r + 1):  # Modify nums within the range
                nums[j] = max(0, nums[j] - val)

            count += 1

        return count if all(x == 0 for x in nums) else -1

    

if __name__ == '__main__':
    s = Solution()

    test_cases = [
        # 1 Minimum Input Size
        ([0], [[0, 0, 1]], 0),

        # 2 Single Query Just Enough
        ([5, 5, 5], [[0, 2, 5]], 1),

        # 3 Single Query Not Enough
        ([5, 5, 5], [[0, 2, 4]], -1),

        # 4 All Elements Already Zero
        ([0, 0, 0, 0, 0], [[0, 4, 2], [1, 3, 1]], 0),

        # 5 Overlapping Queries Needed
        ([3, 3, 3], [[0, 1, 1], [1, 2, 2], [0, 2, 2]], 3),

        # 6 Large `vali` But Non-Overlapping Queries
        ([4, 3, 2, 1], [[0, 1, 4], [2, 3, 2]], 2),

        # 7 Maximum Input Size Edge Case (Expecting large output)
        ([500000] * 100000, [[0, 99999, 5]] * 100000, "Large Output"),

        # 8 Maximum `vali` But Insufficient Decrements
        ([5, 5, 5, 5, 5], [[0, 2, 5], [3, 4, 4]], -1),

        # 9 Smallest `vali` But Many Queries
        ([5, 5, 5, 5, 5], [[0, 4, 1]] * 5, 5),

        # 10 Random Query Order with Partial Decrements
        ([5, 10, 15, 20], [[1, 3, 5], [0, 2, 10], [2, 3, 5], [0, 1, 5]], "Some Expected Output"),
    ]

    for i, (nums, queries, expected) in enumerate(test_cases):
        result = s.minZeroArray(nums, queries)
        print(f"Test Case {i+1}: Expected {expected}, Got {result}")

