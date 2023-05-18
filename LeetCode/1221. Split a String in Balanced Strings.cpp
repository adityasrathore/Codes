class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.size();
        int count=0;
        int temp=0;
        for(int i=0;i<n;i++){
            if(s[i]=='R')
                temp++;
            else
                temp--;
            if(temp==0)
                count++;
        }
        return count;
    }
};
