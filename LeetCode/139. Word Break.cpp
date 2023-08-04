class Solution {
public:
    int solve(int idx,string &s,set<string> &v,vector<int> &dp){
        if(idx == s.size())
            return 1;
        if(dp[idx] != -1)
             return dp[idx];
        string temp = "";
        for(int i=idx;i<s.size();i++){
            temp += s[i];
            if(v.find(temp) != v.end())
                if(solve(i+1,s,v,dp))
                    return dp[i] = 1;
        }
         return dp[idx] = 0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        set <string> v(wordDict.begin(),wordDict.end());
        vector<int> dp(301,-1);
        return solve(0,s,v,dp);
    }
};
