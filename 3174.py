# 3174. Clear Digits

class Solution:
    def clearDigits(self, s: str) -> str:
        stack = []
        for i in s:
            if (i.isdigit() and len(stack) > 0):
                stack.pop()
            else:
                stack.append(i)

        return ''.join(stack)