# 1720. Decode XORed Array
from typing import List

class Solution:
    def decode(self, encoded: List[int], first: int) -> List[int]:
        n = len(encoded)

        result = [first] * (n + 1)
        curr = first

        for i in range(n):
            result[i + 1] = encoded[i] ^ curr

            curr = result[i + 1]

        return result