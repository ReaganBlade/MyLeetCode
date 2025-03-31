# 1976. Number of Ways to Arrive at Destination
from typing import List
from collections import heapq

class Solution:
    def countPaths(self, n: int, roads: List[List[int]]) -> int:
        MOD = 1_000_000_007

        graph = [[] for _ in range(n)]
        for start_node, end_node, travel_time in roads:
            graph[start_node].append((end_node, travel_time))
            graph[end_node].append((start_node, travel_time))

        min_heap = [(0, 0)]
        shortest_time = [float("inf")] * n
        path_count = [0] * n

        shortest_time[0] = 0
        path_count[0] = 1

        while min_heap:
            curr_time, curr_node = heapq.heappop(min_heap)

            if curr_time > shortest_time[curr_node]:
                continue

            for neightbor_node, road_time in graph[curr_node]:
                if curr_time + road_time < shortest_time[neightbor_node]:
                    shortest_time[neightbor_node] = curr_time + road_time
                    path_count[neightbor_node] = path_count[curr_node]

                    heapq.heappush(
                        min_heap, (shortest_time[neightbor_node], neightbor_node)
                    )
                elif curr_time + road_time == shortest_time[neightbor_node]:
                    path_count[neightbor_node] = (
                        path_count[neightbor_node] + path_count[curr_node]
                    ) % MOD

        return path_count[n - 1]