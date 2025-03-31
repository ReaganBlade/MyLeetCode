# 1021. Remove Outermost Parentheses

class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        result = ''
        count = 0

        for i in range(len(s)):
            if (s[i] == '('):
                if count > 0:
                    result += s[i]
                count += 1
            elif (s[i] == ')'):
                if count > 1:
                    result += s[i]
                count -= 1

        return result