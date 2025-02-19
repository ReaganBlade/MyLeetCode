# 1356. Sort Integers by The Number of 1 Bits
from typing import List

class Solution:
    def countBits(self, num: int) -> int:
        count = 0
        while (num > 0):
            if num & 1: count += 1
            num >>= 1
            
        return count

    def sortByBits(self, arr: List[int]) -> List[int]:
        arr.sort(key = lambda num: (self.countBits(num), num))

        return arr
    


if __name__ == "__main__":
    arr = [0,1,2,3,4,5,6,7,8]
    s = Solution()
    res = s.sortByBits(arr)
    print(res)