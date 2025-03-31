# Breadth first search in Graph for traversal
from typing import List
# uses queue
from collections import deque

def main():
    def bfsOfGraph(v, adj: List[int]) -> None:
        vis = [0] * (v)
        vis[0] = 1

        que = deque()
        que.push(0)

        bfs = []

        while que.

        