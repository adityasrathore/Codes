class Solution {
public:
    int solve(int idx,vector<int> &days,vector<int> &costs,vector<int> &dp){
        int n=days.size();
        if(idx>=n)
            return 0;
        if(dp[idx]!=-1)
            return dp[idx];
        int day=costs[0]+solve(idx+1,days,costs,dp);
        int i;
        for(i=idx;i<n && days[i]<days[idx]+7;i++);
        int week=costs[1]+solve(i,days,costs,dp);
        
        for(i=idx;i<n && days[i]<days[idx]+30;i++);
        int month=costs[2]+solve(i,days,costs,dp);
        
        return dp[idx]=min({day,week,month});
        
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        vector <int> dp(n+1,-1);
        return solve(0,days,costs,dp);
    }
};
