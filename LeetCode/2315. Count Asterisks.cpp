class Solution {
public:
    int countAsterisks(string s) {
        int n = s.size();
        int count = 0;
        int t = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '*')
                count++;
            if(s[i] == '|'){
                t++;
                while(t%2 == 1){
                    if(i<n && s[i+1] == '|')
                        t++;
                    i++;
                }
            }
        }
        return count;
    }
};
