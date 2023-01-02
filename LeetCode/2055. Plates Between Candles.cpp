class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        vector <int> idx;
        for(int i=0;i<s.size();i++)
            if(s[i]=='|')
                idx.push_back(i);
        vector <int> ans;
        for(int i=0;i<queries.size();i++){
            int s=queries[i][0];
            int e=queries[i][1];
            int l=lower_bound(idx.begin(),idx.end(),s)-idx.begin();
            int r=upper_bound(idx.begin(),idx.end(),e)-idx.begin()-1;
            if(l>=r)
                ans.push_back(0);
            else
                ans.push_back(idx[r]-idx[l]-(r-l));
        }
        return ans;
    }
};
