class Solution {
public:
    int rob2(vector<int>& nums, int s, int e) {
        int v[e];
        v[s] = nums[s];
        // if(e-s==1)
        // return nums[s];
        //v.push_back(max(nums[s],nums[s+1]));
        v[s+1]=max(nums[s],nums[s+1]);
        for(int i=s+2;i<e;i++){
            //v.push_back(max(nums[i]+v[i-2],v[i-1]));
            v[i]=max(nums[i]+v[i-2],v[i-1]);
        }
        return v[e-1];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return nums[0];
        if(n==2)
        return max(nums[0],nums[1]);
        return max(rob2(nums,0,n-1),rob2(nums,1,n));
    }
};
