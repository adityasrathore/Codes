class Solution {
public:
    int solve(int idx,int rod,vector<int>& rods,vector<vector<int>> &dp){
        if(rods.size() == idx){
            if(rod == 0)
                return 0;
            return INT_MIN;
        }
        if(dp[idx][rod+5000] != -1)
            return dp[idx][rod+5000];
        
        int m1 = rods[idx]+solve(idx+1,rod+rods[idx],rods,dp);
        int m2 = solve(idx+1,rod-rods[idx],rods,dp);
        int m3 = solve(idx+1,rod,rods,dp);
            
        return dp[idx][rod+5000] = max(m1,max(m2,m3));
    }
    int tallestBillboard(vector<int>& rods) {
        vector<vector<int>> dp(21,vector<int>(10001,-1));
        return solve(0,0,rods,dp);
    }
};
