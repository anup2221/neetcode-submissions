class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> v;
        v.push_back(nums[0]);
        if(nums.size()==1)
        return nums[0];
        v.push_back(max(nums[0],nums[1]));
        for(int i=2;i<nums.size();i++){
            v.push_back(max(nums[i]+v[i-2],v[i-1]));
        }
        int ans=0;
        // for (int i=0;i<v.size();i++){
        //     if(ans<v[i])
        //     ans=v[i];
        // }
        return v[v.size()-1];
        
    }
};
