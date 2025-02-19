# 3066. Minimum Operations to Exceed Threshold Value II
from typing import List
import heapq

class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        if len(nums) < 2:
            return 0
        
        heap = []

        for num in nums:
            heapq.heappush(heap, num)

        count = 0
        while(heap[0] <  k):
            x, y = heapq.heappop(heap), heapq.heappop(heap) 
            z = min(x, y) * 2 + max(x, y)
            heapq.heappush(heap, z)

            count += 1

        return count
        
