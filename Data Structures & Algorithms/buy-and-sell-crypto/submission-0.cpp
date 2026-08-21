class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int n= prices.size();
        int max_s=prices[n-1];
        for(int i=n-1;i>=0;i--){
            max_s=max(max_s,prices[i]);
            if(ans<max_s-prices[i])
            ans=max_s-prices[i];


        }
        return ans;
        
    }
};
