class Solution {
public:
    string makeGood(string str) {
        stack <char> s;
        int n=str.size();
        for(int i=0;i<n;i++){
            if(!s.empty() && ((s.top()==str[i]-32)||(s.top()==str[i]+32))){
                s.pop();
                continue;
            }
            s.push(str[i]);
        }
        string ans="";
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
