class Solution
{
public:
    void solve(int idx,vector<int> &v,vector<int> arr,int n,int sum){
        if(idx == n){
            v.push_back(sum);
            return;
        }
        solve(idx+1,v,arr,n,sum+arr[idx]);
        
        solve(idx+1,v,arr,n,sum);
    }
    vector<int> subsetSums(vector<int> arr, int N){
        vector <int> v;
        solve(0,v,arr,N,0);
        return v;
    }
};
