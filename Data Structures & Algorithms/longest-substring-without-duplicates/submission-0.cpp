class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> sett;
        int starting =0;
        int ans=0;
        int end;
        for(end=0;end<s.size();end++){
            //
            if(sett.find(s[end])!=sett.end()){
                ans=max(ans,end-starting);
                
                while(starting<=end && s[starting]!=s[end])
                {
                    sett.erase(s[starting]);
                    starting++;

                }
                if(s[starting]==s[end]){
                    //sett.erase(s[starting]);
                    starting++;
                }
            }
            else{
                sett.insert(s[end]);
                ans=max(ans,end-starting+1);
            }
        }
        //ans=max(ans, end-starting);
        return ans;   

        
    }
};
