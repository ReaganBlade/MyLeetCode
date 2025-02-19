# // 2364. Count Number of Bad Pairs
from typing import List

class Solution:
    def countBadPairs(self, nums: List[int]) -> int:
        bad_pairs = 0
        diff_count = {}
        for i in range(len(nums)):
            diff = i - nums[i]

            good_pairs = diff_count.get(diff, 0)

            bad_pairs += i - good_pairs;

            diff_count[diff] = good_pairs + 1
            print(f"diff: {diff}, good_pairs: {good_pairs}, i: {i}, bad_pairs: {bad_pairs}, dff_count: {diff_count}")

        return bad_pairs
    

if __name__ == "__main__":
    s = Solution()
    n = [4, 1, 3, 3]

    result = s.countBadPairs(n)
    print(result)