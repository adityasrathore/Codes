class Solution {
private:
    int dp[505][505];
    int MOD = 1e9 + 7;
    long long solve(int notpickup, int notdelivered) {
        if (notpickup == 0 && notdelivered == 0)
            return 1;
        
        if (notpickup < 0 || notdelivered < 0 || notpickup > notdelivered) 
            return 0;
        
        if (dp[notpickup][notdelivered] != -1) 
            return dp[notpickup][notdelivered];

        long long res = 0;

        res = (res + notpickup * solve(notpickup - 1, notdelivered)) % MOD;

        res = (res + (notdelivered - notpickup) * solve(notpickup, notdelivered - 1)) % MOD;

        return dp[notpickup][notdelivered] = res;
    }

public:
    int countOrders(int n) {
        memset(dp, -1, sizeof(dp));
        return solve(n, n);
    }
};
