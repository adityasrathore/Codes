class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=s.length();
        int sums=0;
        int sumt=t[n];
        for(int i=0;i<n;i++){
            sumt+=t[i]; //ASCII Sum of String t
            sums+=s[i]; //ASCII Sum of String s
        }
        return sumt-sums; //ASCII Value of that Extra Character
    }
};
