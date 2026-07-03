class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int start=nums[i];
            int next=start;
            while(s.find(next+1)!=s.end()){
                next++;
            }
            ans=max(ans,next-start+1);
            cout<<ans<<endl;
            //if(ans>=nums.size()/2)
            //break;
        }
        
        return ans;
    }
};
