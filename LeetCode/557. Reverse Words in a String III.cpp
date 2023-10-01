class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        int j=0;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                reverse(&s[j],&s[i]);
                j=i+1;
            }
        }
        reverse(s.begin()+j,s.end());
        return s;
    }
};



--------------------------------



class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        int j=0;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                reverse(&s[j],&s[i]);
                j=i+1;
            }
        }
        reverse(s.begin()+j,s.end());
        return s;
    }
};
