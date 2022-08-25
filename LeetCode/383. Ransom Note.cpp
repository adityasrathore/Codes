class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n1=magazine.size();
        int n2=ransomNote.size();
        vector <int> m(26,0);
        vector <int> r(26,0);
        for(int i=0;i<n1;i++)
            m[(int)magazine[i]-97]++;
        for(int i=0;i<n2;i++)
            r[(int)ransomNote[i]-97]++;
        for(int i=0;i<26;i++)
            if(r[i]>m[i])
                return false;
        
        return true;
    }
};
