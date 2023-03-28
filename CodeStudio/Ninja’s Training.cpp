int solve(int idx,int prev,vector <vector<int>> &points,vector<vector<int>> &dp){
    if(idx==0){
        int m=-1;
        for(int i=0;i<=2;i++){
            if(i!=prev)
                m=max(m,points[0][i]);
        }
        return m;
    }
    if(dp[idx][prev]!=-1){
        return dp[idx][prev];
    }
    int m=0;
    for(int i=0;i<=2;i++){
        if(i!=prev){
            m=max(m,points[idx][i]+solve(idx-1,i,points,dp));
        }
    }
    return dp[idx][prev]=m;
}
int ninjaTraining(int n, vector<vector<int>> &points){
    vector <vector<int>> dp(n,vector<int> (4,-1));
    return solve(n-1,3,points,dp);
}
