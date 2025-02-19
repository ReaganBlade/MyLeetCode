# 2375. Construct Smallest Number from DI String

from typing import List
from collections import permutations

# class Solution:
#     def check_pattern(self, string: str, num: str) -> bool:
#         n = len(string)
#         for i in range(n):
#             x, y = num[i], num[i+1]
#             if (string[i] == 'I') & (x > y):
#                 return False
#             elif (string[i] == "D") & (x < y):
#                 return False

#         return True
    
#     def smallestNumber(self, pattern: str) -> str:  
#         pattern_len = len(pattern)

#         # Generate Sequence 
#         num_seq = "".join([str(x) for x in range(1, pattern_len + 2)])

#         for permutation in permutations(num_seq):
#             permutation_str = "".join(permutation)
#             if self.check_pattern(pattern, permutation_str):
#                 return permutation_str
            
#         return ""


