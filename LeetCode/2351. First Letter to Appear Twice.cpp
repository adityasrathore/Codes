class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map <char,int> mp;
        for(auto i:s)
            if(mp[i]==1)
                return i;
            else if(mp[i]==0)
                mp[i]++;
        
        return 'a';
    }
};
