# 125. Valid Palindrome

class Solution:
    def isPalindrome(self, s: str) -> bool:
        string = ""
        char_arr = []
        for i in s:
            if i.isalpha():
                char_arr.append(i.lower())
                string += i.lower()
        
        if len(string) < 2:
            return True

        i = 0
        print(string)
        while len(char_arr) > 0:
            if char_arr.pop() != string[i]:
                return False
            i += 1

        return True