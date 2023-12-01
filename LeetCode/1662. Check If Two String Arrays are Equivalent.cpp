class Solution {

public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int m=word1.size();
        int n=word2.size();
        string s1="";
        string s2="";
        for(int i=0;i<m;i++)
            s1+=word1[i];
        for(int i=0;i<n;i++)
            s2+=word2[i];
        if(s1==s2)
            return true;
        return false;
    }
};
