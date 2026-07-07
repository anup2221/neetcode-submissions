class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        for(int i=0;i<nums.size()-2;i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int l=i+1,r=nums.size()-1;
            while(l<r){
                if(nums[i]+nums[l]+nums[r]==0){
                v.push_back({nums[i],nums[l],nums[r]});
                int pl=nums[l];
                while(l<nums.size()&&nums[l]==pl)
                l++;
                int pr=nums[r];
                while(r>=0&&nums[r]==pr)
                r--;
                }
                else if(nums[i]+nums[l]+nums[r]<0)
                l++;
                else
                r--; 

            }
        }
        return v;
    }
};
