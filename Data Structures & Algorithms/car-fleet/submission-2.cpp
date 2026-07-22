class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        vector<pair<int,double>> v;
        for(int i=0;i<speed.size();i++){
            v.push_back({position[i],(double)(target-position[i])/speed[i]});
        }
        sort(v.begin(), v.end(), greater<pair<int,double>>());
        int fleet=0;
        double max_so_far=0;
        for(int i=0;i<speed.size();i++){
            if(v[i].second>max_so_far)
            {
                fleet++;
                max_so_far=v[i].second;
            }
        }
        return fleet;
    }
};
