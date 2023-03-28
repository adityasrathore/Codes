#include <bits/stdc++.h> 
int solve(int idx,vector<int> &nums,vector <int> &t){
    if(t[idx]!=-1)
        return t[idx];
    if(idx==0)
        return nums[idx];
    if(idx<0)
        return 0;
    
    int l=nums[idx]+solve(idx-2,nums,t);
    int r=solve(idx-1,nums,t);
    return t[idx]=max(l,r);
}
int maximumNonAdjacentSum(vector<int> &nums){
    int n=nums.size();
    vector <int> t(n,-1);
    return solve(n-1,nums,t);
}


int maximumNonAdjacentSum(vector<int> &nums){
    int n=nums.size();
    vector <int> dp(n,0);
    dp[0]=nums[0];
    for(int i=1;i<n;i++){
        int pick=nums[i];
        if(i>=2)
            pick+=dp[i-2];
        int npick=dp[i-1];
        dp[i]=max(pick,npick);
    }
    return dp[n-1];
}

int maximumNonAdjacentSum(vector<int> &nums){
    int n=nums.size();
    int prev1=nums[0];
    int prev2=0;
    int curr;
    for(int i=1;i<n;i++){
        int pick=nums[i];
        if(i>=2)
            pick+=prev2;
        int npick=0+prev1;
        curr=max(pick,npick);
        prev2=prev1;
        prev1=curr;
        
    }
    return prev1;
}

