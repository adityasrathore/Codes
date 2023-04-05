class Solution {
public:
    bool t[201][20001];
    bool canPartition(vector<int>& nums) {
        int total=accumulate(nums.begin(),nums.end(),0);
        if(total%2==1)
            return false;
        else{
            int n=nums.size();
            int sum=total/2;
            for(int i=0;i<n+1;i++){
                for(int j=0;j<sum+1;j++){
                    if(i==0)
                        t[i][j]=false;
                    if(j==0)
                        t[i][j]=true;
                }
            }

            for(int i=1;i<n+1;i++){
                for(int j=1;j<sum+1;j++){           
                    if(nums[i-1]<=j)
                        t[i][j]= (t[i-1][j-nums[i-1]] || t[i-1][j]);
                    else
                        t[i][j]=t[i-1][j];
                }
            }
            return t[n][sum];
        }
    }
};

class Solution {
public:
    int solve(int idx,int target,vector<int>& nums,vector<vector<int>> &dp){
        if(target==0)
            return true;
        if(idx==0)
            return nums[0]==target;
        if(dp[idx][target]!=-1)
            return dp[idx][target];
        bool notPick=solve(idx-1,target,nums,dp);
        bool pick=false;
        if(target>=nums[idx])
            pick=solve(idx-1,target-nums[idx],nums,dp);
        return dp[idx][target]=pick|notPick;
            
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int target=accumulate(nums.begin(),nums.end(),0);
        if(target%2==1){
            return false;
        }
        vector<vector<int>> dp(n,vector<int>(target/2+1,-1));
        return solve(n-1,target/2,nums,dp);
    }
};
