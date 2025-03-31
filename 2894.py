# 2894. Divisble and Non-Divisble Sums Difference

class Solution:
    def differenceOfSums(self, n: int, m: int) -> int:
        nums1 = 0
        nums2 = 0

        for i in range(n + 1):
            if i % m != 0:
                nums1 += i
            else:
                nums2 += i

        return nums1 - nums2