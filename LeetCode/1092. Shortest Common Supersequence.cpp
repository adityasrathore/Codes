class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int m = str1.size();
        int n = str2.size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(str1[i-1] == str2[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        // int lcs = dp[m][n];
        int i = m;
        int j = n;
        string ans = "";
        while(i > 0 && j > 0){
            if(str1[i-1] == str2[j-1]){
                ans += str1[i-1];
                i--;
                j--;
            }
            else if(dp[i-1][j] > dp[i][j-1]){
                ans += str1[i-1];
                i--;
            }
            else{
                ans += str2[j-1];
                j--;
            }
        }
        while(i > 0){
            ans += str1[i-1];
            i--;
        }
        while(j > 0){
            ans += str2[j-1];
            j--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};


----------------------------------------

class Solution {
public:
     int t[1001][1001];
    string SCS(string &x,string &y,int m,int n){
    for(int i=0;i<m+1;i++){
        for(int j=0; j<n+1;j++){
            if(i==0||j==0)
                t[i][j]=0;
        }
    }
    for (int  i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(x[i-1]==y[j-1])
                t[i][j]=1+t[i-1][j-1];
            else    
                t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
    string s;
    int i=m;
    int j=n;
    while(i>0 && j>0){
        if(x[i-1]==y[j-1]){
            s+=x[i-1];
            i--;
            j--;
        }
        else if(t[i][j-1]>t[i-1][j]){
            s+=y[j-1];
            j--;
        }
        else{
            s+=x[i-1];
            i--;
        }
    }
    while(i>0){
        s+=x[i-1];
        i--;
    }
    while(j>0){
        s+=y[j-1];
        j--;
    }
    reverse(s.begin(),s.end());
    return s;
}
    string shortestCommonSupersequence(string str1, string str2) {
        return SCS(str1,str2,str1.length(),str2.length());
    }
};
