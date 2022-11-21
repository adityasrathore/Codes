class Solution {
public:
    bool checkPalindrome(string s){
        int i=0;
        int j=s.length()-1;
        while(i<j)
            if(s[i]==s[j]){
                i++;
                j--;
            }
        
            else
                return false;
        
        return true;
    }
    bool isPalindrome(string s) {
        string new_s;
        int n=s.length();
        for(int i=0;i<n;i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))   
                new_s+=s[i];
            if(s[i]>='A' && s[i]<='Z')
                new_s+=s[i]-'A'+'a';
        }
        return checkPalindrome(new_s);
    }
};
