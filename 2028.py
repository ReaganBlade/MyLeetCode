# // 2028. Find Missing Observations
from typing import List

class Solution:
    def missingRolls(self, rolls: List[int], mean: int, n: int) -> List[int]:
        sum_rolls = sum(rolls)

        rem = mean * (n + len(rolls)) - sum_rolls

        if rem > 6 * n or rem < n:
            return []

        dist = rem // n
        mod = rem % n

        result = [dist] * n

        for i in range(mod):
            result[i] += 1

        return result

        