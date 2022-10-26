class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2)
            return true;
        int m=s1.size();
        int n=s2.size();
        if(m!=n)
            return false;
        vector <int> v(26,0);
        for(int i=0;i<n;i++){
            v[s1[i]-'a']++;
            v[s2[i]-'a']--;
        }
        for(int i=0;i<26;i++)
            if(v[i]!=0)
                return false;
        int count=0;
        for(int i=0;i<n;i++)
            if(s1[i]!=s2[i])
                count++;
        if(count==2)
            return true;
        return false;
    }
};
