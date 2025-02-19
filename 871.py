# 871. Minimum Number of Refueling Stops
from typing import List

class Solution:
    def minRefuelStops(self, target: int, startFuel: int, stations: List[List[int]]) -> int:
        n_stations = len(stations)
        dp = [0] * (n_stations + 1)
        dp[0] = startFuel

        for i in range(n_stations):
            for t in range(i, -1, -1):
                if dp[t] >= stations[i][0]:
                    dp[t + 1] = max(dp[t + 1], dp[t] + stations[i][1])

        for i in range(n_stations + 1):
            if (dp[i] >= target): return i


        return -1