// 683. Redundant Connection
#include <bits/stdc++.h>
using namespace std;

// 
// Here is the optimized code without comments:  

// ```cpp
class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int> parent(1001);
        for (int i = 0; i < 1001; ++i) parent[i] = i;

        function<int(int)> find = [&](int x) {
            return parent[x] == x ? x : parent[x] = find(parent[x]);
        };

        for (auto &edge : edges) {
            int u = edge[0], v = edge[1];
            int pu = find(u), pv = find(v);
            if (pu == pv) return edge;
            parent[pu] = pv;
        }
        return {};
    }
};
// ```

class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& vectorOfEdges) {
        map<int, int> edges;
        vector<vector<int>> redundant;
        for (auto i: vectorOfEdges){
            int first = i[0], second = i[1];
            if (edges[first] && edges[second])
                redundant.push_back(i);
            else {
                if (edges[first]) edges[second] = first;
                else edges[first] = second;
            }
        }

        return redundant[redundant.size() - 1];
    }
};

int main(){
    Solution s;
    vector<vector<int>> edges = {{1, 2}, {1, 3}, {2, 3}};
    vector<int> result = s.findRedundantConnection(edges);
    cout << result[0] << ", " << result[1] << endl;

    return 0;
}