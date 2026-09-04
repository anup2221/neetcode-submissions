class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<pair<int,char>> pq;
        queue<pair<int,pair<char,int>>> q;
        unordered_map<char,int> m;
        for(int i=0;i<tasks.size();i++){
            m[tasks[i]]++;
        }
        for(auto it: m){
            pq.push({it.second,it.first});
        }
        int time=0;
        pair<int,char> p;
        while(!pq.empty()||!q.empty()){
            time++;
            if(!pq.empty())
    {
            p=pq.top();
            pq.pop();
            if(p.first>1)
                q.push({time+n,{p.second,p.first-1}});
    }
            if(!q.empty()&&time>=q.front().first){
                    pq.push({q.front().second.second,q.front().second.first});
                    q.pop();
                
            }

        }
        return time;
        
    }
};
