# 1446. Consecutive Characters

# method 1
class Solution:
    def maxPower(self, s: str) -> int:
        n = len(s)

        max_consec = 0

        i = 0
        while (i < n):
            cur_char = s[i]
            count = 0
            while(i < n and s[i] == cur_char):
                if s[i] == cur_char:
                    count += 1

                i += 1
            
            max_consec = max(count, max_consec)

        return max_consec
    
# method 2
class Solution:
    def maxPower(self, s: str) -> int:
        n = len(s)
        dp = [0] * n

        dp[0] = 1

        for i in range(1, n):
            if s[i] == s[i-1]:
                dp[i] = dp[i-1] + 1
            else:
                dp[i] = 1
        
        return max(dp)
