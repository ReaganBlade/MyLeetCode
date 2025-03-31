# 1358. Number of Substrings Containing All Three Characters

from collections import defaultdict

class Solution:
    def numberOfSubstrings(self, s: str) -> int:
        n = len(s)
        ocr_count = defaultdict(int)

        count = 0
        left = 0
        for right in range(n):
            ocr_count[s[right]] += 1
            
            while(len(ocr_count) == 3):
                count += (len(s) - right)
                ocr_count[s[left]] -= 1

                if ocr_count[s[left]] == 0:
                    ocr_count.pop(s[left])

                left += 1

        return count
                    
