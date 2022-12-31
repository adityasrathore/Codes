class Solution {
public:
    int minSteps(string s, string t) {
        vector <int> v1(26,0),v2(26,0);
        for(char i:s)
            v1[i-'a']++;
        for(char i:t)
            v2[i-'a']++;

        for(int i=0;i<26;i++)
            v1[i]-=v2[i];
        
        int count=0;
        for(int i=0;i<26;i++){
            if(v1[i]!=0)
                count+=abs(v1[i]);
        }
        
        return count;
    }
};2186. Minimum Number of Steps to Make Two Strings Anagram II
