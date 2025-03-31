# 2033. Minimum Operations to Make a Uni-Value Grid

from typing import List

class Solution:
    def minOperations(self, grid: List[List[int]], x: int) -> int:
        numsArray = []
        result = 0

        for i in grid:
            for j in i:
                numsArray.append(j)

        numsArray.sort()
        length = len(numsArray)

        finalCommon = numsArray[length/2]

        for num in numsArray:
            if num % x != finalCommon % x:
                return -1
            result += abs(finalCommon - num) / x

        return result
