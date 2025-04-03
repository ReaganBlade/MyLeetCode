# 1941. Check if All Characters Have Equal Number of Occurrences

from collections import Counter

class Solution:
    def areOccurencesEqual(self, s: str) -> bool:
        word_count = Counter(s)

        return True if len(set(word_count.values())) == 1 else False
    
    