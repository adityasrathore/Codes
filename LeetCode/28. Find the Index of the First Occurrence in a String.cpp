class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=haystack.length();
        int n=needle.length();
        if(n>m)
            return -1;
        int i=0;
        int j=0;
        while(i<m && j<n){
            if(haystack[i]==needle[j]){
                i++;
                j++;
                if(j==n)
                    return i-j;
            }
            else{
                i=i-j+1;
                j=0;
            }
        }
        return -1;
    }
};
