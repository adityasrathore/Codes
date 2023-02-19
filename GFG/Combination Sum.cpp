class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void solve(int idx,vector<int> &ans,vector<vector<int>> &v,vector<int> &a,int target){
        if(idx==a.size()){
            if(target==0)
                v.push_back(ans);
            return;
        }
        if(target>=a[idx]){
            ans.push_back(a[idx]);
            solve(idx,ans,v,a,target-a[idx]);
            ans.pop_back();
        }
        solve(idx+1,ans,v,a,target);
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        vector<vector<int>> v;
        vector <int> ans;
        set <int> s(A.begin(),A.end());
        A.clear();
        for(auto i:s){
            A.push_back(i);
        }
        // cout<<A.size()<<endl;
            
        solve(0,ans,v,A,B);
    
        for(int i=0;i<v.size();i++){
            sort(v[i].begin(),v[i].end());
        }
        sort(v.begin(),v.end());
        return v;
    }
};
