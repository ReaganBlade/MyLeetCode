# 214. Shortest Palindrome

class Solution:
    def shortestPalindrome(self, s: str) -> str:
        if s == s[::-1]:
            return s

        
        new_str = ""
        rem_str = ""
        for i in range(len(s) - 1, -1, -1):
            temp_str = s[:i]

            if (temp_str == temp_str[::-1]):
                new_str = temp_str
                rem_str = s[i:]
                break

        print(f"new_str = {new_str}")
        print(f"rem_str = {rem_str}")

        return rem_str[::-1] + new_str + rem_str
    

if __name__ == "__main__":
    s = Solution()
    string = "aacecaaa"
    result = s.shortestPalindrome(string)