class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> a(26,0);
        vector<int> b(26,0);
        if(s1.size()>s2.size())
        return false;
        for(int i=0;i<s1.size();i++){
            a[s1[i]-'a']++;
            b[s2[i]-'a']++;
        }
        if(a==b)
        return true;
        int n=s1.size();
        for(int i=n;i<s2.size();i++){
            b[s2[i]-'a']++;
            b[s2[i-n]-'a']--;
            if(a==b)
            return true;
            
        }
        return false;
        
    }
};
