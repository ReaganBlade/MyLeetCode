# 3169. Count Days Without Meetings
from typing import List

# MLE
# class Solution:
#     def countDays(self, days: int, meetings: List[List[int]]) -> int:
        
#         meeting_days = [0] * (days + 1)
#         meeting_days[0] = 1
#         for i, j in meetings:
#             meeting_days[i: j + 1] = [1] * (j - i + 1)

#         no_meetings = meeting_days.count(0)
#         return no_meetings
    

# Another Solution -> direct counting days
# class Solution:
#     def countDays(self, days: int, meetings: List[List[int]]) -> int:
#         meeting_days = days
        
#         for i, j in meetings:
#             meeting_days -= (j - i + 1)

#         return meeting_days
    
# Using sorting
class Solution:
    def countDays(self, days: int, meetings: List[List[int]]) -> int:
        if not meetings:
            return days

        meetings.sort()

        start, end = meetings[0]

        for i, j in meetings[1:]:
            if i <= end:
                end = max(end, j)
            else:
                days -= (end - start + 1)
                start, end = i, j

        days -= (end - start + 1)

        return days

    
        

if __name__ == '__main__':
    # meetings = [[1, 3], [2, 4], [7, 10]]
    # meetings = [[2, 5], [3, 4], [4, 8], [6, 7], [10, 13], [12, 15]]
    meetings = [[3,4],[4,8],[2,5],[3,8]]
    days = 8
    s = Solution()
    result = s.countDays(days, meetings)

    print(result)