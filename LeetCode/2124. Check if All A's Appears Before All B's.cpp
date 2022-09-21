class Solution {
public:
    bool checkString(string s) {
        int n=s.length();
        int a=0;
        for(int i=0;i<n;i++)
            if(s[i]=='a')
                a++;
        if(a==0)
            return true;
        
        int t=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a' && t<=a){
                t++;
                if(t==a)
                    return true;
            }
            else 
                return false;
        }
        return true;
    }
};
