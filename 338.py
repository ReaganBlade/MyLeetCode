# 338. Counting Bits
from typing import List

# class Solution:
#     def getBits(self, n: int) -> int:
#         count = 0
#         while n > 0:
#             if n & 1 == 1:
#                 count += 1
#             n >>= 1
        
#         return count


#     def countBits(self, n: int) -> List[int]:
#         dp = [0] * (n + 1)
#         for i in range(n+1):
#             dp[i] = self.getBits(i)

#         return dp

class Solution:
    def countBits(self, n: int) -> List[int]:
        if n == 0:
            return [0]
        elif n == 1:
            return [0, 1]

        res = [0] * (n + 1)
        res[1] = 1

        for i in range(2, n+1):
            res[i] = (i & 1) + res[i >> 1]

        return res



if __name__ == '__main__':
    s = Solution()
    res = s.getBits(7)
    print(res)
    pass