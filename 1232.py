# 1232. Check if it's a Straight Line
from typing import List

'''
formula for solving the question
y – y1 = [(y2 – y1) /(x2 – x1)] (x – x1)

(x1, y1), (x2, y2) -> first 2 points in the array

'''

class Solution:
    def checkStraightLine(self, coordinates: List[List[int]]) -> bool:
        (x0, y0), (x1, y1) = coordinates[:2]

        for x, y in coordinates:
            if (x1 - x0) * (y - y1) != (x - x1) * (y1 - y0):
                return False
            
        return True