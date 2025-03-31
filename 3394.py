# 3394. Check if Grid can be Cut into Sections
from typing import List


# Input Data:
'''
n = 5


rectangles = [
    [1, 0, 5, 2],
    [0, 2, 2, 4],
    [3, 2, 5, 3],
    [0, 4, 4, 5]
]

box = [startx, starty, endx, endy]

OutPut: True
'''


class Solution:
    def checkValidCuts(self, n: int, rectangles: List[List[int]]) -> bool:
        def _check_cuts(rectangles: List[List[int]], dim: int) -> bool:
            gap_count = 0

            rectangles.sort(key=lambda rect: rect[dim])
            
            furthest_end = rectangles[0][dim + 2]

            for i in range(1, len(rectangles)):
                rect = rectangles[i]

                if furthest_end <= rect[dim]:
                    gap_count += 1

                furthest_end = max(furthest_end, rect[dim + 2])

            return gap_count >= 2
        
        return _check_cuts(rectangles, 0) or _check_cuts(rectangles, 1)
