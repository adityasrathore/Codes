class Solution {
public:
    bool static comp(pair<char,int> &a,pair<char,int> &b){
        if(a.second == b.second)
            return a<b;
        return a.second>b.second;
    }
    
    string frequencySort(string s) {
        int n=s.length();
        string ans;
        unordered_map <char,int> mp;
        for(int i=0;i<n;i++)
            mp[s[i]]++;
        vector <pair<char,int>> v;
        for(auto i:mp)
            v.push_back(i);
        sort(v.begin(),v.end(),comp);
        for(int i=0;i<v.size();i++)
            while(v[i].second--)
                ans+=v[i].first;
        return ans;
    }
};
