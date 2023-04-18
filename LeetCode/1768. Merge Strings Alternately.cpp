class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        string s="";
        int i=0,j=0;
        while(i<m || j<n){
            if(i<m && j<n){
                s+=word1[i];
                s+=word2[j];
                i++;
                j++;
            }
            if(i==m && j<n){
                s+=word2[j];
                j++;
            }
            if(i<m && j==n){
                s+=word1[i];
                i++;
            }
        }
        return s;
    }
};
