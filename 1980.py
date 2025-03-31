# 1980. Find Unique Binary String
from typing import List

class Solution:

    def generateString(self, n: int, string: str, st: set):
        if (len(string) == n):
            if (string not in st):
                return string
            
            return ""
        
        zero_string = self.generateString(n, string + "0", st)
        if zero_string :
            return zero_string
        return self.generateString(n, string + "1", st)

    def findDifferentBinaryString(self, nums: List[str]) -> str:
        num_set = set(nums)
        return self.generateString(len(nums), "", num_set)