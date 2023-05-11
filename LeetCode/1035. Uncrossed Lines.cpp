class Solution {
public:
    int dp[501][501];
    int solve(vector<int>& nums1, vector<int>& nums2,int n,int m){
        if(n<=0 || m<=0)
            return 0;
        if(dp[n-1][m-1]!=-1)
            return dp[n-1][m-1];
        if(nums1[n-1] == nums2[m-1]){
            int option1=1+solve(nums1,nums2,n-1,m-1);
            int option2=solve(nums1,nums2,n,m-1);
            int option3=solve(nums1,nums2,n-1,m);
            return dp[n-1][m-1]=max({option1,option2,option3});
        }
        else{
            int option1=solve(nums1,nums2,n,m-1);
            int option2=solve(nums1,nums2,n-1,m);
            return dp[n-1][m-1]=max({option1,option2}); 
        }
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        memset(dp,-1,sizeof(dp));
        return solve(nums1,nums2,nums1.size(),nums2.size());
    }
};
