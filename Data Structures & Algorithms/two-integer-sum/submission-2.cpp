class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int req=target-nums[i];
            if(m.find(req)!=m.end()&&i!=m[req]){
                return {i,m[req]};

            }
        }
        return {};
        
    }
};
