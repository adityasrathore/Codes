class Solution {
public:
    int t[1001];
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n=scores.size(),ans = 0;
        vector<pair<int, int>> v;
        for(int i=0;i<n;i++) 
            v.push_back({ages[i], scores[i]});
        
        sort(v.begin(), v.end());
        
        for(int i=0;i<n;i++){
            t[i]=v[i].second;
            for(int j=0;j<i;j++){
                if(v[j].second<=v[i].second)
                    t[i] = max(t[i],t[j]+v[i].second);
            }
            ans=max(ans,t[i]);
        }
        return ans;
    }
};
