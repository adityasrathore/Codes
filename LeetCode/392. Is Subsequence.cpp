Two-Pointers

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        int j = 0;
        for(int i=0;i<n;i++){
            if(t[i] == s[j])
                j++;
        }
        if(j == m)
            return true;
        return false;
    }
};


---------------------------------

DP

class Solution {
public:
    
    bool isSubsequence(string s, string t) {
        int m=s.length();
        int n=t.length();
        if(m>n)
            return false;
        int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(s[i-1]==t[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=dp[i][j-1];
            }
        }
        if(dp[m][n]==m)
            return true;
        else 
            return false;
    }
};
