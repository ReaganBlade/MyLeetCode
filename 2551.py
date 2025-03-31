# 2551. Put marbles in the bag
from typing import List

class Solution:
    def putMarbles(self, weights: List[int], k: int) -> int:
        n = len(weights)

        pair_weights = [weights[i] + weights[i + 1] for i in range(n - 1)]

        pair_weights.sort()

        answer = 0
        for i in range(k - 1):
            answer += pair_weights[n - 2 - i] - pair_weights[i]

        return answer