#

class Solution:
    def makeFancyString(self, s: str) -> str:
        if (len(s) < 3):
            return s
        
        result = s[:2]
        
        for i in range(2, len(s)):
            if (result[-2] == s[i] and result[-1] == s[i]):
                continue
            result += s[i]

        return result


if __name__ == "__main__":
    s = Solution()
    string = "aaabaaaa"
    result = s.makeFancyString(string)
    print(result)