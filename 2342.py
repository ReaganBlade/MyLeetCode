# 2342. Max Sum of a Pair With Equal Sum of Digits
from typing import List
from collections import defaultdict

class Solution:
    def maximumSum(self, nums: List[int]) -> int:
        nums.sort()
        digit_sums = defaultdict(list)

        for num in nums:
            s = sum(int(digit) for digit in str(num))
            digit_sums[s].append(num)

        max_sum = -1
        for key, values in digit_sums.items():
            if len(values) > 1:
                values.sort()  # Ensure the two largest numbers are at the end
                max_sum = max(max_sum, values[-1] + values[-2])

        return max_sum

if __name__ == "__main__":
    s = Solution()
    m = [18, 43, 36, 13, 7]
    res = s.maximumSum(m)
    print(res)  # Output: 54
