class Solution {
public:
    int MOD = 1000000007;
    int kInversePairs(int n, int k) {
        int dp[1001][1001] = {};
        for(int i = 1 ; i<= n ;i++){
            for(int j = 0; j<=k ; j++){
                if(j==0)
                    dp[i][j]=1;
                else{
                    for(int p = 0 ; p<=min(i-1,j);p++){
                        dp[i][j] = (dp[i][j]+dp[i-1][j-p])%MOD;
                    }
                }
            }
        }
        return dp[n][k];
    }
};
