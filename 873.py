# 873. Length of Longest Fibonacci Subsequence
from typing import List

class Solution:
    def lenLongestFibSubseq(self, arr: List[int]) -> int:
        num_set = set(arr)
        max_len = 0

        n = len(arr)

        for start in range(n):
            for next in range(start + 1, n):
                prev = arr[next]
                curr = arr[start] + arr[next]
                curr_len = 2

                while curr in num_set: 
                    prev, curr = curr, curr + prev
                    curr_len += 1
                    max_len(max_len, curr_len)

        return max_len
    

class Solution:
    def lenLongestFibSubseq(self, arr: List[int]) -> int:
        numArr = set(arr)
        maxFib = 0

        n = len(arr)

        for left in range(n):
            for right in range(left + 1, n):
                prev = arr[right]
                curr = arr[left] + arr[right]
                curr_len = 2

                while curr in numArr:
                    prev, curr = curr, curr + prev
                    curr_len += 1

                    maxFib = max(maxFib, curr_len)

        return maxFib