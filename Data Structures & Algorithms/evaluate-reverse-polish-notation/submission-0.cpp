class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                int b=s.top();
                s.pop();
                int a=s.top();
                s.pop();
                int result=0;
                if(tokens[i]=="+")
                    result=a+b;
                else if(tokens[i]=="-")
                    result=a-b;
                else if(tokens[i]=="*")
                    result=a*b;
                else
                    result=a/b;

                s.push(result);
            }
            else{
                s.push(stoi(tokens[i]));
            }

        }
        return s.top();
    }
};
