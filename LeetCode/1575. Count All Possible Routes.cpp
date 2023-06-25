class Solution {
public:
    int mod = 1e9+7;
    int solve(int s,int f,int fuel,vector<int>&loc,vector<vector<int>>&dp){
        int count = 0;
        if(s == f)
            count++;
        
        if(dp[s][fuel] != -1)
            return dp[s][fuel];
        
        for(int i=0;i<loc.size();i++){
            if(i!=s && abs(loc[i]-loc[s])<=fuel){
                count += solve(i,f,fuel-abs(loc[i]-loc[s]),loc,dp);
                count = count%mod;
            }
        }
        
        return dp[s][fuel] = count;
    }
    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        int n = locations.size();
        vector<vector<int>> dp(n,vector<int>(fuel+1,-1));
        return solve(start,finish,fuel,locations,dp);
    }
};
