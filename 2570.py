# 2570. Merge Two 2D Arrays by Summing Values
from typing import List

# Hash-Map Solution
# class Solution:
#     def mergeArrays(self, nums1: List[List[int]], nums2: List[List[int]]) -> List[List[int]]:
#         key_vals = {}
#         for i, j in nums1:
#             key_vals[i] = j

#         for i, j in nums2:
#             key_vals[i] = key_vals.get(i, 0) + j

#         result = []
#         for i, j in key_vals.items():
#             result.append([i, j])

#         return sorted(result)


# 
class Solution:
    def mergeArrays(self, nums1: List[List[int]], nums2: List[List[int]]) -> List[List[int]]:
        m, n = len(nums1), len(nums2)
        i = j = 0
        result = []
        while (i < m and j < n):
            if (nums1[i][0] == nums2[j][0]):
                result.append([nums1[i][0], nums1[i][1] + nums2[j][1]])
                i += 1
                j += 1
            elif (nums1[i][0] < nums2[j][0]):
                result.append(nums1[i])
                i += 1
            else:
                result.append(nums2[j])
                j += 1

        while ( i < m ):
            result.append(nums1[i])
            i += 1

        while ( j < n):
            result.append(nums2[j])
            j += 1

        return result
            

if __name__ == '__main__':
    s = Solution()
    nums1 = [[1,2],[2,3],[4,5]]
    nums2 = [[1,4],[3,2],[4,1]]
    res = s.mergeArrays(nums1, nums2)
    print(res)