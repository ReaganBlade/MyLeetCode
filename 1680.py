# 1680. Concatenation of Consecutive Binary Numbers

class Solution:
    def concatenatedBinary(self, n: int) -> int:
        MOD = 1000000007
        s = ''
        for i in range(1, n+1):
            s += bin(i)[2:]

        return int(s, 2) % MOD


class Solution:
    def concatenatedBinary(self, n: int) -> int:
        MOD = 1000000007
        result = 0
        
        for i in range(1, n + 1):
            length = i.bit_length()  # Get number of bits in 'i'
            result = ((result << length) | i) % MOD  # Shift and add
        
        return result
