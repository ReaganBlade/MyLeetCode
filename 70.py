# 70. Climbing stairs
class Solution:
    def climbStairs(self, n: int) -> int:
        a, b = 0, 1
        s = 0
        while b < n:
            print(a)
            s += a
            a, b = b, a+b

        return b    
    

class Solution:
    def climbStairs(self, n: int) -> int:
        if n <= 3: return n

        a, b = 3, 2
        s = 0

        for i in range(3, n):
            s = a + b
            b = a
            a = s

        return s