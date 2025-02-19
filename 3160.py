# 
from typing import List

from typing import List

class Solution:
    def queryResults(self, limit: int, queries: List[List[int]]) -> List[int]:
        unique_colors = 0
        ball_color_map = {}  # Maps ball -> color
        color_count_map = {}  # Maps color -> count
        result = []

        for ball, color in queries:
            if ball not in ball_color_map:
                ball_color_map[ball] = color
                color_count_map[color] = color_count_map.get(color, 0) + 1
                if color_count_map[color] == 1:
                    unique_colors += 1
            else:
                prev_color = ball_color_map[ball]
                if prev_color != color:
                    color_count_map[prev_color] -= 1
                    if color_count_map[prev_color] == 0:
                        unique_colors -= 1

                    ball_color_map[ball] = color
                    color_count_map[color] = color_count_map.get(color, 0) + 1
                    if color_count_map[color] == 1:
                        unique_colors += 1

            result.append(unique_colors)

        return result
