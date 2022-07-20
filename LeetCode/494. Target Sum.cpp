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
            for(int j=0;j<sum+1;j++){
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
