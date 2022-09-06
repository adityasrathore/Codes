class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n=s.length();
        unordered_map <char,int> mp;
        for(int i=0;i<n;i++)
            mp[s[i]]++;
        int p=0;
        if(mp.find(letter)!=mp.end()){
            return (mp[letter]*100)/n;
        }
        else
            return 0;
    }
};
