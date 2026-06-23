class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mmp;
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mmp[strs[i]].push_back(temp);
        }
        vector<vector<string>> vvs;
        for(auto it=mmp.begin();it!=mmp.end();it++){
            vvs.push_back(it->second);
        }
        return vvs;
    }
};
