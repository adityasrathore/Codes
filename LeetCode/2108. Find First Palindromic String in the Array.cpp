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
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++)
            if(checkPalindrome(words[i]) == true)
                return words[i];
        return "";
    }
};
