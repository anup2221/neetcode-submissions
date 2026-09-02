class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> p(stones.begin(),stones.end());
        if(p.size()==1)
        return p.top();
        while(!p.empty()){
            int x=p.top();
            p.pop();
            if(p.size()==0)
            return x;
            int y=p.top();
            p.pop();
            if(x!=y)
            p.push(x-y);
        }
        return 0;
    }
};
