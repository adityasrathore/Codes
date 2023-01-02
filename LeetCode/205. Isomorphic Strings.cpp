class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map <char,int> mp1,mp2;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(mp1[s[i]]!=mp2[t[i]]) // If different values are assigned previously then Return False
                return false;
            mp1[s[i]]=i+1; // Assigning the Freq/Values to the letters
            mp2[t[i]]=i+1;
        }
        return true; // When the letter are Isomorphic and satisfy all the conditions
    }
};
