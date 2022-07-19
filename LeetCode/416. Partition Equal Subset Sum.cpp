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


