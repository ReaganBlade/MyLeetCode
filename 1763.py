# 1763. Longest Nice Substring
from typing import List

class Solution:
    def checkNice(self, string):
        if not string:
            return ""

        for i in range(len(string)):
            if string[i].lower() in string and string[i].upper() in string:
                continue
            else:
                left = self.checkNice(string[:i])
                right = self.checkNice(string[i + 1:])
                return left if len(left) >= len(right) else right
        
        return string
    
    def longestNiceSubstring(self, s: str) -> str:
        return self.checkNice(s)


if __name__ == '__main__':
    
    s = Solution()
    string = "YazaAay"
    res = s.longestNiceSubstring(string)
    print(res)