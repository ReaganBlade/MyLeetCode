# 3280. Convert Date to Binary

class Solution:
    def convertDateToBinary(self, date: str) -> str:
        l = date.split('-')
        result = []
        for n in l:
            n = int(n)
            res = ''
            while n > 0:
                res = str(n & 1) + res
                n >>= 1
            result.append(res)

        return '-'.join(result)



        