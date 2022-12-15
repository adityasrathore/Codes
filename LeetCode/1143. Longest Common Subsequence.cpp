class Solution {
public:
    int t[1001][1001];
    int lcs(string &text1, string &text2,int m,int n){
        if(n==0 || m==0)
            return 0;
        if(t[m][n]!=-1)
            return t[m][n];
        
        if(text1[m-1]==text2[n-1])
            return t[m][n]=1+lcs(text1,text2,m-1,n-1);
        else
            return t[m][n]=max(lcs(text1,text2,m,n-1),lcs(text1,text2,m-1,n));
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(t,-1,sizeof(t));
        int m=text1.length();
        int n=text2.length();
        return lcs(text1,text2,m,n);
    }
};

class Solution {
public:
  int t[1001][1001];
  int lcsbottomup(string &x,string &y,int m,int n){
    for(int i=1;i<m+1;i++)
        for(int j=1;j<n+1;j++)
            if(x[i-1]==y[j-1])
                t[i][j]=1+t[i-1][j-1];
            else    
                t[i][j]=max(t[i-1][j],t[i][j-1]);

    return t[m][n];
}
    int longestCommonSubsequence(string text1, string text2) {
        memset(t,0,sizeof(t));
        int m=text1.length();
        int n=text2.length();
        return lcsbottomup(text1,text2,m,n);
    }
};
