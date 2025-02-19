# 2698. Find the Punishment Number of an Integer

class Solution:
    def can_partition(self, string_num: str, target: int) -> bool:
        # find Valid Partition
        if not string_num and target == 0:
            return True

        # Partition not Found
        if target < 0:
            return False
            
        for index in range(len(string_num)):
            left = string_num[: index + 1]
            right = string_num[index + 1: ]
            left_num = int(left)

            if self.can_partition(right, target - left_num):
                return True

        return False
    

    def punishmentNumber(self, n: int) -> int:
        punishment_num = 0

        for i in range(1, n+1):
            sq = i**2

            if self.can_partition(str(sq), i):
                punishment_num += sq

        return punishment_num
    

if __name__ == '__main__':
    s = Solution()
    n = 10
    result = s.punishmentNumber(n)
    print(result)
