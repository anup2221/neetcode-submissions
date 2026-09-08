class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> adj(n+1);
        for(int i=0;i<times.size();i++){
            adj[times[i][0]].push_back({times[i][1],times[i][2]});
        }
        int INF=1e8;
        vector<int> dis(n+1,INF);
        dis[k]=0;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        pq.push({0,k});
        while(!pq.empty()){
            auto [d,node] = pq.top();
            pq.pop();
            for(auto i: adj[node] ){
                if(d+i.second<dis[i.first])
                {
                    dis[i.first]=d+i.second;
                    pq.push({dis[i.first],i.first});
                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(dis[i]==INF)
            return -1;
            else{
                ans=max(ans,dis[i]);
            }
        }
        return ans;
    }
};
