# 438. Find All Anagrams in a string

from collections import Counter
from typing import List

from collections import Counter
from typing import List

class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        if len(s) < len(p):
            return []

        char_p = Counter(p)
        char_s = Counter(s[:len(p) - 1])
        result = []
        left = 0

        for right in range(len(p) - 1, len(s)):
            char_s[s[right]] += 1

            if char_s == char_p:
                result.append(left)

            char_s[s[left]] -= 1
            if char_s[s[left]] == 0:
                del char_s[s[left]]
            left += 1

        return result
