class Solution {
public:
    int t[501][501];
    int solve(string s1,string s2,int i,int j){
        if(i<0)
            return j+1;
        if(j<0)
            return i+1;
        if(t[i][j]!=-1)
            return t[i][j];
        if(s1[i]==s2[j])
            return t[i][j]=solve(s1,s2,i-1,j-1);
        return t[i][j]=1+min(solve(s1,s2,i-1,j),
                             min(solve(s1,s2,i,j-1),
                                 solve(s1,s2,i-1,j-1)));
    }
    int minDistance(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        memset(t,-1,sizeof(t));
        return solve(word1,word2,m-1,n-1);
    }
};
