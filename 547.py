# 547. Number of Provinces
from typing import List

class Solution:
    def dfs(self, node, adj, vis):
        vis[node] = 1

        for i in range(self.size):
            if adj[node][i] and not vis[i]:
                self.dfs(i, adj, vis)


    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        self.size = len(isConnected)
        visited = [0] * self.size
        # ls = []
        count = 0
        for i in range(self.size):
            if not visited[i]:
                count += 1
                self.dfs(i, isConnected, visited)

        return count


