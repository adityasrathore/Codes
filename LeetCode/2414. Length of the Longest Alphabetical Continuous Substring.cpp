class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n = s.size();
        int count = 1,ans = 1;
        for(int i=0;i<n-1;i++){
            if(s[i+1] - s[i] == 1){
                count++;
                ans = max(ans,count);
            }
            
            else{
                count = 1;
            }
        }
        return ans;
    }
};
