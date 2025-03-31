# 118. Pascal's Triangle
from typing import List

class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        res = [[1]]

        for i in range(numRows - 1):
            prev = [0] + res[-1] + [0]
            row = []
            for e in range(len(res[-1])):
                row.append(prev[i] + prev[i+1])
            
            res.append(row)

        return res
