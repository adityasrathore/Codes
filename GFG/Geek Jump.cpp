class Solution {
  public:
    int solve(int idx,vector<int>& h,vector<int>& dp){
        if(idx==0){
            return 0;
        }
        if(dp[idx]!=-1)
            return dp[idx];
        int left=abs(h[idx]-h[idx-1])+solve(idx-1,h,dp);
        int right=INT_MAX;
        if(idx>=2)
            right=abs(h[idx]-h[idx-2])+solve(idx-2,h,dp);
        return dp[idx]=min(left,right);
    }
    int minimumEnergy(vector<int>& height, int n) {
        vector <int> dp(n,-1);
        return solve(n-1,height,dp);
    }
};
