#include <bits/stdc++.h>
int solve(int idx,vector<int> &h,vector<int> &t){
    if(idx == 0)
        return 0;
    if(t[idx]!=-1)
        return t[idx];
    int left=solve(idx-1,h,t)+abs(h[idx-1]-h[idx]);
    int right=INT_MAX;
    if(idx>=2)
        right=solve(idx-2,h,t)+abs(h[idx-2]-h[idx]);

    return t[idx]=min(left,right);
} 
int frogJump(int n, vector<int> &h)
{
    vector <int> t(n,-1);
    return solve(n-1,h,t);
}




int frogJump(int n, vector<int> &h)
{
    vector <int> t(n,0);
    t[0]=0;
    for(int i=1;i<n;i++){
        int l=t[i-1]+abs(h[i]-h[i-1]);
        int r=INT_MAX;
        if(i>=2)
            r=t[i-2]+abs(h[i]-h[i-2]);
        t[i]=min(l,r);
    }
    return t[n-1];
}
