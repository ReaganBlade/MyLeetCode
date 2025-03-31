# 2579. Count Total Number of Colored Cells

class Solution:
    def coloredCells(self, n: int) -> int:
        
        res = (2 * (n ** 2)) - (2 * n) + 1
        return res