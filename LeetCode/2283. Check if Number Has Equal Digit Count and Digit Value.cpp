class Solution {
public:
    bool digitCount(string num) {
        unordered_map <char,int> mp;
        int n=num.length();
        for(int i=0;i<n;i++)
            mp[num[i]]++;
        for(int i=0;i<n;i++)
            if(num[i]!='0'+mp['0'+i] )
                return false;
        return true;
                
    }   
};
