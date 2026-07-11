// Solved with GitSolve AI
// Platform   : leetcode
// Problem    : Count Visited Nodes in a Directed Graph
// URL        : https://leetcode.com/problems/count-visited-nodes-in-a-directed-graph/
// Difficulty : Hard
// Language   : cpp
// Saved at   : 2026-07-11T17:28:38.948Z

const int N = 1e5+5;

const int PRV_DFS = 1;
const int CUR_DFS = 2;

vector<int> visited(N);

class Solution {
    vector<int> edges;
    vector<int> result;
    
    void dfs (int src) {
        if (result[src] != -1) return;
        if (visited[src] == CUR_DFS) {
            int len = 1;
            int cur = src;
            while (edges[cur] != src) {
                len ++;
                cur = edges[cur];
            }
            
            cur = src;
            while (edges[cur] != src) {
                result[cur] = len;
                cur = edges[cur];
            }
            result[cur] = len;
            return;
        }
        
        visited[src] = CUR_DFS;        
        
        dfs(edges[src]);
        if (result[src] == -1)
            result[src] = result[edges[src]] + 1;        
    }
    
public:
    vector<int> countVisitedNodes(vector<int>& edge) {
        edges = edge;
        int n = edges.size();
        
        for (int j = 0; j < n; j ++) visited[j] = 0;
        result.clear();
        result.resize(n, -1);
        
        for (int start = 0; start < n; start ++) dfs(start);        
        return result;
    }
};