class Solution {
public:
    string truncateSentence(string s, int k) {
        int n=s.size();
        int count=0;
        string str="";
        for(int i=0;i<n;i++){
            if(s[i]==' ' ){
                count++;
                if(count==k)
                    break;
            }
            
            str+=s[i];
        }
        return str;
    }
};
