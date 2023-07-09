class Solution {
public:
    //YA BUsDIK BOOL karke true ka count lele baat barabar hai tu jo kar rha hai sab shi no BT only GT
    int countSubstrings(string s) {
        int n = s.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        int count = 0;
        for(int d=0;d<n;d++){
            for(int i=0,j=i+d;j<n;i++,j++){
                if(i == j)
                    dp[i][j] = 1;
                else if(d == 1)
                    dp[i][j] = (s[i] == s[j]) ? 2:0;
                else
                    if(s[i] == s[j] && dp[i+1][j-1] > 0)
                        dp[i][j] = 2 + dp[i+1][j-1];
                
                if(dp[i][j] > 0)
                    count++;
            }
        }
        return count;
    }
};
