# 119. Pascal's Triangle II
from typing import List

class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        res = [[1]]

        for i in range(rowIndex):
            prev = [0] + res[-1] + [0]

            row = []
            for e in range(len(res[-1]) + 1):
                row.append(prev[e] + prev[e+1])

            res.append(row)

        return res[-1]