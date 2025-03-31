# 2224. Minimum Number of Operations to Convert Time

class Solution:
    def convertTime(self, current: str, correct: str) -> int:
        cur_hrs, cur_mins = map(int, current.split(":"))
        cor_hrs, cor_mins = map(int, correct.split(":"))
        ops = 0

        mins = cor_mins - cur_mins
        if (cur_mins > cor_mins):
            mins = 60 - (cur_mins - cor_mins)
            cur_hrs += 1

        if mins > 0:
            ops += mins // 15
            mins %= 15

            ops += mins // 5
            mins %= 5

            ops += mins

        ops += cor_hrs - cur_hrs

        return ops



