# 3190. Find Minimum Operations to Make All Elements Divisible by Three
from collections import List
from collections import deque

class Solution:
    def minimumOperations(slef, nums: List[int]) -> int:
        que = deque()
        result = []
        count = 0

        for i in range(len(nums)):
            while que and i > que[0] + 2:
                que.popleft()

            if (nums[i] + len(que)) % 2 == 0:
                if i + 2 >= len(nums):
                    return -1
                count += 1
                que.append(i)

        return count
