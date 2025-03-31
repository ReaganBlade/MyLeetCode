# 2109. Adding Spaces to a String
from typing import List

class Solution:
    def addSpaces(self, s: str, spaces: List[int]) -> str:
        l = 0
        words = []

        for r in spaces:
            word = s[l: r]
            l = r
            words.append(word)

        words.append(s[r:])

        return " ".join(words)
    