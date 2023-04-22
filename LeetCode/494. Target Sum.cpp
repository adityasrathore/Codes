class Solution {
public:
    int t[21][1001];
    int countSubset(vector<int> &nums,int sum){
        int n=nums.size();
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0)
                    t[i][j]=0;
                if(j==0)
                    t[i][j]=1;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=0;j<sum+1;j++){//IMP
                if(nums[i-1]<=j)
                    t[i][j]=t[i-1][j-nums[i-1]]+t[i-1][j];
                else
                    t[i][j]=t[i-1][j];
            }
        }
        return t[n][sum];
    }
    int findTargetSumWays(vector<int>& nums, int sum) {
        int total=accumulate(nums.begin(),nums.end(),0);
        sum=abs(sum);
        if(sum>total || (sum+total)%2==1)
            return 0;
        int s1=(sum+total)/2;
        return countSubset(nums,s1);
    }
};


class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        target=abs(target);
        int total=accumulate(nums.begin(),nums.end(),0);
        if((total-target)%2==1 || (total-target)<0)
            return 0;
        target=(total-target)/2;
        vector <vector<int>> dp(n,vector<int>(target+1,0));
        for(int i=0;i<n;i++)
            dp[i][0]=1;
        if(nums[0]<=target)
            dp[0][nums[0]]=1;
        if(nums[0]==0)
            dp[0][0]=2;
        for(int i=1;i<n;i++){
            for(int j=0;j<=target;j++){
                int notPick=dp[i-1][j];
                int pick=0;
                if(j>=nums[i])
                    pick=dp[i-1][j-nums[i]];
                dp[i][j]=pick + notPick;
            }
        }
        return dp[n-1][target];
    }
};
