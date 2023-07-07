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

https://leetcode.com/problems/number-of-substrings-with-only-1s/discuss/3730817/Q1513-Accepted-C%2B%2B-Sliding-Win-and-Counting-or-Easiest-Method
