class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>> vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),[](const auto& a, const auto& b) {
        return a.second > b.second; 
    });
    vector<int> ans;
    int i=0;
    while(k){
        ans.push_back(vec[i].first);
        k--;
        i++;
    }
        return ans;
    }
};
