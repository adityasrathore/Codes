class Solution {
   
public:
    int reductionOperations(vector<int>& a) {
        int n=a.size();
        sort(a.begin(),a.end());
        vector<int> dp(n);
        dp[0]=0;
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]){
                dp[i]=dp[i-1];
            }
            else{
                dp[i]=dp[i-1]+1;
            }
        }
        int sum=0;
        for(auto x:dp){
            sum+=x;
        }
        return sum;
    }
};
