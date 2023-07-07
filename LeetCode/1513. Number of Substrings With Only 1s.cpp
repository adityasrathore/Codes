class Solution {
public:
    int MOD = 1e9 + 7;
    int numSub(string s) {
        int n = s.size();
        int ans = 0,count = 1;
        for(int i=0;i<n;i++)
            if(s[i] == '1')
                ans++;
        
        for(int i=1;i<n;i++){
            if(s[i] == '1' && s[i-1] == '1'){
                ans = (ans+count)%MOD;
                count++;
            }
            else
                count = 1;
        }
        return ans;
    }
};
