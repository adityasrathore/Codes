class Solution {
public:
    static bool comp(string &a,string &b){
        return a.size() < b.size();
    }
    bool Compare(string &a,string &b){
        int i = 0,j = 0;
        int m = a.size();
        int n = b.size();
        if(m != n+1)
            return false;
        while(i < m){
            if(a[i] == b[j]){
                i++;
                j++;
            }
            else
                i++;
        }
        if(i == m && j == n)
            return true;
        return false;
    }
    int longestStrChain(vector<string>& words) {
        int n = words.size();
        vector <int> dp(n,1);
        sort(words.begin(),words.end(),comp);
        int maxLen = 1;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(Compare(words[i],words[j]) && dp[j]+1 > dp[i])
                    dp[i] = 1 + dp[j];
            }
            maxLen = max(maxLen,dp[i]);
        }
        
        return maxLen;
    }
};
