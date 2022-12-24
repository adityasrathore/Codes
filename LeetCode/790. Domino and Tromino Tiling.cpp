class Solution {
public:
    int numTilings(int n) {
        int md=1e9+7;
        vector <long> dp{0,1,2,5};
        //n=0 ans=0     Base Case
        //n=1 ans=1     Base Case
        //n=2 ans=2     Base Case
        //n=3 ans=5     ans=2*2+1 ans=2*ans[n-1]+k(constant) Pattern Seen
        //n=4 ans=24    ans=2*ans[n-1]+ans[n-3]=k 2*5+2
        dp.resize(1001);
        for(int i=4;i<=n;i++){
            dp[i]=2*dp[i-1]+dp[i-3];
            dp[i]%=md;
        }
        return dp[n];
    }
};
