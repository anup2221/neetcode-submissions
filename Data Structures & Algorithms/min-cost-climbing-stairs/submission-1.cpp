class Solution {
public:
    // int mem[101];
    // int costclimb(vector<int>& cost, int n){
    //     if(n==1)
    //     return cost[0];
    //     if(n==2)
    //     return min(cost[0],cost[1]);

    //     if(mem[n]!=0)
    //     return mem[n];
    //     return mem[n]=min(cost[n-1]+costclimb(cost,n-1),cost[n-2]+costclimb(cost,n-2));

    // }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n);
        dp[n-1]=cost[n-1];
        if(n==1)
        return dp[0];
        dp[n-2]=min(dp[n-1]+cost[n-2],cost[n-2]);
        for(int i=n-3;i>=0;i--){
            dp[i]=cost[i]+min(dp[i+1],dp[i+2]);
        }
        return min(dp[0],dp[1]);
    }
};
