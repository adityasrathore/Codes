class Solution{
public:
    void solve(int idx,vector<int> &ans,vector<vector<int>> &v,vector<int> arr,int n,int k){
        if(k==0){
            v.push_back(ans);
            return;
        }
        for(int i=idx;i<n;i++){
            if(i>idx && arr[i-1]==arr[i])
                continue;
            if(arr[i] > k)
                break;
            ans.push_back(arr[i]);
            solve(i+1,ans,v,arr,n,k-arr[i]);
            ans.pop_back();
        }
    }
    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        vector <vector<int>> v;
        vector <int> ans;
        sort(arr.begin(),arr.end());
        solve(0,ans,v,arr,n,k);
        return v;
    }
};
