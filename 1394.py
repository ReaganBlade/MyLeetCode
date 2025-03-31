from typing import List
from collections import Counter

class Solution:
    def findLucky(self, arr: List[int]) -> int:
        num_dict = Counter(arr)
        lucky_int = -1
        for i, j in num_dict.items():
            if i == j and i > lucky_int:
                lucky_int = i

        return lucky_int