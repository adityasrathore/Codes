class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())
            return false;
        int n=word1.size();
        unordered_map <char,int> mp1,mp2;
        for(int i=0;i<n;i++){
            mp1[word1[i]]++;
            mp2[word2[i]]++;
        }        
        if(mp1.size()!=mp2.size())
            return false;
        string s1="",s2="";
        for(auto i:mp1){
            s1+=i.first;
        }
        for(auto i:mp2){
            s2+=i.first;
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        if(s1!=s2)
            return false;
        
        vector <pair<int,char>> v1,v2;
        for(auto i:mp1){
            v1.push_back({i.second,i.first});
        }
        for(auto i:mp2){
            v2.push_back({i.second,i.first});
        }
        
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(int i=0;i<v1.size();i++){
            if(v1[i].first!=v2[i].first)
                return false;
        }
        return true;
    }
};
