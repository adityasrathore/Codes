class Solution {
public:
    int maxPower(string s) {
        int n = s.size();
        int len = 0;
        int j = 0;
        for(int i=0;i<n;i++){
            char c = s[i];
            j = i;
            while(i<n && c == s[i+1]){
                i++;
            }
            len = max(len,i-j+1);
        }
        return len;
    }
};
