class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> v;
        int n=matches.size();
        unordered_map <int,int> mp1,mp2; 
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                if(j==0)
                    mp1[matches[i][j]]++;
                else{
                    mp2[matches[i][j]]++;
                    mp1[matches[i][j]]=0;
                }
            }
        }
        vector <int> w,l;
        for(auto i:mp1){
            if(i.second>0 && mp2[i.first]==0)
                w.push_back(i.first);
        }
        for(auto i: mp2){
            if(i.second==1)
                l.push_back(i.first);
        }
        sort(w.begin(),w.end());
        sort(l.begin(),l.end());
        v.push_back(w);
        v.push_back(l);
        return v;
    }
};
