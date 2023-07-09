class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n = s.size();
        int i = 0,j = n-1;
        while(i<=j){
            if(!(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')){
                i++;
                continue;
            }
            if(!(s[j] >= 'a' && s[j] <= 'z' || s[j] >= 'A' && s[j] <= 'Z')){
                j--;
                continue;
            }
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};
