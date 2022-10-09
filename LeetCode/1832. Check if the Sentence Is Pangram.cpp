class Solution {
public:
    bool checkIfPangram(string s) {
        unordered_map <char,int> mp;
        int n=s.size();
        
        for(int i=0;i<n;i++)
            mp[s[i]]++;
        if(mp.size()==26)
            return true;
        
        return false;
    }
};
