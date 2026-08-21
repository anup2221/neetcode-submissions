class Solution {
public:
    int mem[46];
    int climbStairs(int n) {
        if(n==1||n==2)
        return n;
        if(mem[n]!=0)
        return mem[n];
        return mem[n]=climbStairs(n-1)+climbStairs(n-2);
        
    }
};
