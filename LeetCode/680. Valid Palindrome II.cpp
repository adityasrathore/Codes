class Solution {
public:
    bool checkPalindrome(string s,int i,int j){
        while(i<=j)
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else
                return false;
        
        return true;
    }
    bool validPalindrome(string s) {
        int n=s.length();
        int i=0,j=n-1;
        while(i<=j)
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else
                return checkPalindrome(s,i,j-1)||checkPalindrome(s,i+1,j);
            
        return true;
    }
};
