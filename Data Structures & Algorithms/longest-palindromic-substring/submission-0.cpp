class Solution {
public:
    string longestPalindrome(string s) {
        int start=0;
        int end =0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            int l=i;
            int r=i;
            while(l-1>=0&&r+1<s.size()&&s[l-1]==s[r+1]){
                l--;
                r++;
            }
            if(r-l+1>ans){
                ans=r-l+1;
                end=r;
                start=l;
            }

            //consider case where there are even element
            l=i;
            r=i+1;
            if(l>=0&&r<s.size()&&s[l]==s[r]){
            while(l-1>=0&&r+1<s.size()&&s[l-1]==s[r+1]){
                l--;
                r++;
            }
            if(r-l+1>ans){
                ans=r-l+1;
                end=r;
                start=l;
            }}

        }
        string t="";
        for(int i=start;i<=end;i++){
            t+=s[i];
        }
        return t;
    }
};
