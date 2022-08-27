class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s;
        int n=strs.size();
        if(n==0)
            return "";
        if(n==1)
            return strs[0];
        sort(strs.begin(),strs.end());
        int i=strs[0].size();
        string s1=strs[0];
        string s2=strs[n-1];
        for(int x=0;x<i;x++)
            if(s1[x]==s2[x])
                s+=s1[x];
            else 
                break;
        
        return s;
    }
};
