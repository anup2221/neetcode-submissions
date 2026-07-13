class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> s;
        vector<int> ans(temperatures.size(),0);
        for(int i=temperatures.size()-1;i>=0;i--){
            if(!s.empty()){
                while(!s.empty()&&temperatures[i]>=s.top().first)
                s.pop();
                if(!s.empty()){
                    int index=s.top().second;
                    ans[i]=index-i;
                }
                s.push({temperatures[i],i});

            }
            else
            s.push({temperatures[i],i});
        }
        return ans;
    }
};
