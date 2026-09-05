class Solution {
public:
    bool dfs(int node, vector<vector<int>>& adj, vector<int>& visited, vector<int>& ans){

        for(auto it: adj[node]){
            if(visited[it]==1)
            return false;
            if(visited[it]==2)
            continue;
            else{
            visited[it]= 1;
            //ans.push_back(it);
            if(!dfs(it,adj,visited,ans))
            return false;
            }

        }
        visited[node]=2;
        ans.push_back(node);

    return true;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> ans;
        for(int i=0;i<prerequisites.size();i++){
            int v=prerequisites[i][0];
            int u=prerequisites[i][1];
            adj[u].push_back(v);
        }
        vector<int> visited(numCourses, 0);
        for(int i=0;i<numCourses;i++){
            if(!visited[i]){
            visited[i]=1;
            //ans.push_back(i);
            if(!dfs(i,adj,visited,ans))
            return {};
            }
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};
