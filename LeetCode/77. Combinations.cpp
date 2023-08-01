class Solution {
public:
    vector<int> temp;
    void solve(int i,int n,int k,vector<vector<int>> &v){
        if(i == n){
            if(temp.size() == k)
                v.push_back(temp);
            return;
        }
        temp.push_back(i+1);
        solve(i+1,n,k,v);
        temp.pop_back();
        solve(i+1,n,k,v);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> v;
        solve(0,n,k,v);
        return v;
    }
};
