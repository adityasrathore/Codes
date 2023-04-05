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
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int totalSum=accumulate(nums.begin(),nums.end(),0);
        if(totalSum%2==1)
            return false;
        totalSum=totalSum/2;
        vector<vector <bool>> dp(n,vector<bool>(totalSum+1,0));
        for(int i=0;i<n;i++)
            dp[i][0]=true;
        for(int j=0;j<totalSum;j++)
            dp[0][j]=false;
        dp[0][0]=true;
        for(int i=1;i<n;i++){
            for(int j=1;j<=totalSum;j++){
                bool notPick=dp[i-1][j];
                bool pick=false;
                if(j>=nums[i])
                    pick=dp[i-1][j-nums[i]];
                dp[i][j]=pick|notPick;
            }
        }
        return dp[n-1][totalSum];
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




