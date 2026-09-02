class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& v, int k) {
        priority_queue<pair<float,vector<int>>> pq;
        for(int i=0;i<k;i++){
            float d=sqrt(pow(v[i][0],2)+pow(v[i][1],2));
            pq.push({d,v[i]});
        }
        for(int i=k;i<v.size();i++){
            float d=sqrt(pow(v[i][0],2)+pow(v[i][1],2));
            float d2=pq.top().first;
            if(d2>d){
                pq.pop();
                pq.push({d,v[i]});
            }
        }
        vector<vector<int>> ans;
        
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
