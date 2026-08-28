class Solution {
public:
    bool dfs(int node, vector<vector<int>>& adj, vector<int>& visited){

        for(auto it: adj[node]){
            if(visited[it]==1)
            return false;
            if(visited[it]==2)
            continue;
            else{
            visited[it]= 1;
            if(!dfs(it,adj,visited))
            return false;
            }

        }
        visited[node]=2;

    return true;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            int v=prerequisites[i][0];
            int u=prerequisites[i][1];
            adj[u].push_back(v);
        }
        vector<int> visited(numCourses, 0);
        for(int i=0;i<numCourses;i++){
            if(!visited[i]){
            visited[i]=1;
            if(!dfs(i,adj,visited))
            return false;
            }
        }

        return true;
    }
};
