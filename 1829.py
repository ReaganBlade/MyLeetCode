# 1829. Maximum XOR for Each Query
from typing import List

class Solution:
    def getMaximumXor(self, nums: List[int], maximumBit: int) -> List[int]:
        last = nums[-1]
        res = []
        cur = last

        for i in nums:
            cur ^= i
            res.append(cur)

        return res[::-1]