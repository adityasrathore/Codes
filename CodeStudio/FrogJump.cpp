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
