class Solution {
public:
    int MOD = 1e9 + 7;
    int countHomogenous(string s) {
        int n = s.size();
        int ans = n,count = 1;
        
        for(int i=1;i<n;i++){
            if(s[i] == s[i-1]){
                ans = (ans+count)%MOD;
                count++;
            }
            else
                count = 1;
        }
        
        return ans;
    }
};
