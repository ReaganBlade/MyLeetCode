# Introduction to Graph
# using adjacency matrix


def adjMatrix():
    n, m = map(int, input("Enter m and n").split())
    adj = [[0] * (n+1) for i in range(m)]

    for i in range(m):
        u, v = map(int, input().split())
        adj[u][v] = 1
        adj[v][u] = 1

    for i in adj:
        print(i)

    return

# adjMatrix()

def adjList():
    n, m = map(int, input().split())
    adj = [[] for _ in range(n+1)]
    for i in range(m):
        # print(i)
        u, v = map(int, input().split())
        # print(adj[u], adj[v])
        adj[u].append(v)
        adj[v].append(u)

    for i in adj:
        print(i)

    return

# adjList()

def adjListWeight():
    n, m = map(int, input().split())
    adj = [[] for _ in range(n+1)]
    for i in range(m):
        u, v, w = map(int, input().split())
        adj[u].append((v, w))
        adj[v].append((u, w))

    for i in adj:
        print(i)

    return 

adjListWeight()