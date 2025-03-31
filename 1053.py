# 1053. Previous Permutation with one Swap

from typing import List

class Solution:
    def prevPermOpt1(self, arr: List[int]) -> List[int]:
        left = 0
        for i in range(len(arr)-1):
            if arr[i] > arr[i+1]:
                left = i
                break

        maxSmall = 0
        right = 0
        for j in range(left + 1, len(arr)):
            if arr[j] > maxSmall and arr[j] < arr[left]:
                maxSmall = arr[j]
                right = j
        
        arr[left], arr[right] = arr[right], arr[left]

        return arr
    
class Solution:
    def prevPermOpt1(self, arr: List[int]) -> List[int]:

        # traverse r to l
        n = len(arr)

        left = -1
        for i in range(n-2, -1, -1):
            if arr[i] > arr[i+1]:
                left = i
                break

        if left == -1:
            return arr

        right = left + 1
        for r in range(left + 1, n):
            if arr[r] < arr[left] and arr[r] > arr[right]:
                right = r

        arr[left], arr[right] = arr[right], arr[left]

        return arr