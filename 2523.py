# 2523. Closest Prime Numbers in Range
from typing import List


class Solution:
    def getSieve(self, right: int) -> List[bool]:
        sieve = [True] * (right + 1)
        sieve[0] = sieve[1] = False
        for i in range(2, right + 1):
            if sieve[i]:
                for j in range(i * 2, right + 1, i):
                    sieve[j] = False
        return sieve

    def closestPrimes(self, left: int, right: int) -> List[int]:
        nums = self.getSieve(right)
        minDiff = float('inf')
        res = []
        
        prev = None

        for i in range(left, right + 1):
            if nums[i]:
                if prev is not None and (i - prev) < minDiff:
                    minDiff = (i - prev)
                    res = [prev, i]
                prev = i

        return res if res else [-1, -1]




        
# def getSieve(right):

#     sieve = [True] * (right + 1)
#     sieve[0] = sieve[1] = False
#     for i in range(2, right + 1):
#         if sieve[i] == True:
#             for i in range(i+i, right + 1, i):
#                 sieve[i] = False

#     print(sieve)


# getSieve(10)