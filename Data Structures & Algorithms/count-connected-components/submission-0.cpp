class Solution {
public:
    void dfs(int node,vector<vector<int>>& graph,vector<bool>& visited){
        visited[node]=true;
        for(auto it:graph[node]){
            if(!visited[it]){
                dfs(it,graph,visited);
            }
        }

    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> graph(n);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        int ans=0;
        vector<bool> visited(n,false);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i,graph,visited);
                ans++;
            }
        }
    return ans;
    }
};
