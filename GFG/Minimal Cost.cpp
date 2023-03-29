
class Solution {
  public:
    int solve(int idx,int k,vector <int> &h,vector <int> &dp){
        if(idx==0)
            return 0;
        if(dp[idx]!=-1)
            return dp[idx];
        int m=INT_MAX;
    
        for(int i=1;i<=k;i++){ 
            int temp;
            if(idx>=i)
                temp=abs(h[idx]-h[idx-i])+solve(idx-i,k,h,dp);
            m=min(m,temp);
        }
        return dp[idx]=m;
    }
    int minimizeCost(vector<int>& height, int n, int k) {
        vector <int> dp(n,-1);
        return solve(n-1,k,height,dp);
    }
};
