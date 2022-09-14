class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n=s.length();
        unordered_map <char,int> mp;
        for(int i=0;i<n;i++)
            mp[s[i]]++;
        for(int i=0;i<n-1;i++)
            if(mp[s[i]]!=mp[s[i+1]])
                return false;
        
        return true;
    }
};
