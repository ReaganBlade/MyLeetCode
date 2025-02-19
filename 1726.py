# 1726. Tuple with same Product
from typing import List


'''
# Time Limit Exceeded Error
class Solution:
    def tupleSameProduct(self, nums: List[int]) -> int:
        nums_length = len(nums)
        nums.sort()

        num_of_tuples = 0
        for ai in range(nums_length):
            for bi in range(nums_length - 1, ai, -1):
                prod = nums[ai] * nums[bi]

                possible_d_val = set()
                
                for ci in range(ai + 1, bi):
                    if prod % nums[ci] == 0:
                        d_val = prod // nums[ci]

                        if d_val in possible_d_val:
                            num_of_tuples += 8

                        possible_d_val.add(nums[ci])

        return num_of_tuples

'''

# class Solution0(object):
#     def tupleSameProduct(self, nums):
#         n = len(nums)

#         prod_pairs = dict()
#         nOfTuples = 0

#         for i in range(n):
#             for j in range(i+1, n):
#                 prod = nums[i] * nums[j]

#                 if prod in prod_pairs:
#                     prod_pairs[prod] += 1
#                 else:
#                     prod_pairs = 1
        

#         for prod_freq in prod_pairs.values():
#             eq_prod = (
#                 (prod_freq - 1) * prod_freq // 2
#             )

#             nOfTuples += 8 * eq_prod

#         return nOfTuples
    
class Solution1(object):
    def tupleSameProduct(self, nums):
        n = len(nums)

        pair_prod = {}

        nOfTuples = 0

        for i in range(n):
            for j in range(i + 1, n):
                prod = nums[i] * nums[j]
                if prod in pair_prod:
                    pair_prod[prod] += 1
                else:
                    pair_prod[prod] = 1

        for prod_freq in pair_prod.values():
            eq_prod = (
                (prod_freq - 1) * prod_freq // 2
            )

            nOfTuples += 8 * eq_prod

        return nOfTuples


if __name__ == "__main__":
    s = Solution()
    nums = [2,3,4,6]
    result = s.tupleSameProduct(nums)

    print(result)
