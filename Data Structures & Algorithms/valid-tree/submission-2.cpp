class Solution {
public:
    bool dfs(int node, vector<vector<int>>& adj, vector<int>& visited, int parent){
        visited[node]=1;

        for(auto it: adj[node]){
            if(visited[it]==1&&it!=parent)
            return false;

            if(!visited[it]&&!dfs(it,adj,visited,node))
            return false;
    
            

        }

    return true;
    }
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(int i=0;i<edges.size();i++){
            int v=edges[i][0];
            int u=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> visited(n,0);
        
            
        if(!dfs(0,adj,visited,0))
        return false;
        for(int i=0;i<n;i++){
            if(visited[i]==0)
            return false;
        }

            

        return true;

    }
};
