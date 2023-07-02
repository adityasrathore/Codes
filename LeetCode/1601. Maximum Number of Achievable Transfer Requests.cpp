class Solution {
public:
    int ans = 0;
    int temp = 0;
    void solve(int idx,int n,vector<int> &v,vector<vector<int>> &requests){
        if(idx == requests.size()){
            for(auto i:v){
                if(i != 0){
                    return;
                }
            }
            ans = max(ans,temp);
            return;
        }
        solve(idx+1,n,v,requests);
        temp++;
        v[requests[idx][0]]--;
        v[requests[idx][1]]++;
        solve(idx+1,n,v,requests);
        temp--;
        v[requests[idx][0]]++;
        v[requests[idx][1]]--;
    }
    int maximumRequests(int n, vector<vector<int>>& requests) {
        vector<int> v(n,0);
        solve(0,n,v,requests);
        return ans;
    }
};
