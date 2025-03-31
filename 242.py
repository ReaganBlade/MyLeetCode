# 242. Valid Anagram
from collections import Counter

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        si = Counter(list(s))
        ti = Counter(list(t))

        return si == ti