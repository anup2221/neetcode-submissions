class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> q;
        for(int i=0;i<k;i++){
            q.push({nums[i],i});
        }
        vector<int> v;
        v.push_back(q.top().first);
        for(int i=k;i<nums.size();i++){
            q.push({nums[i],i});
            while(i-q.top().second>=k){
                q.pop();
            }
            v.push_back(q.top().first);
        }
    return v;

        
    }
};
