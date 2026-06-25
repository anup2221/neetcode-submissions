class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod_all=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            prod_all*=nums[i];
        }
        vector<int> v;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                int prod_new=1;
                for(int j=0;j<n;j++){
                    if(j==i)
                    continue;
                    prod_new*=nums[j];

                }
                v.push_back(prod_new);

            }
            else
            v.push_back(prod_all/nums[i]);
        }
        return v;

    }
};
