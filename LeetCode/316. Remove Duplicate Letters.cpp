class Solution {
public:
    string removeDuplicateLetters(string s) {
        string ans = "";
        int lastPos[26] = {}; 
        bool added[26] = {};
        int n = s.size();
        for(int i=0;i<n;i++)
            lastPos[s[i] - 'a'] = i;
        
        for(int i=0;i<n;i++){
            if (added[s[i] - 'a'] == true) 
                continue;
            while (!ans.empty() && ans.back()>s[i] && lastPos[ans.back() - 'a']>i){
                added[ans.back() - 'a'] = false;
                ans.pop_back();
            }
            ans.push_back(s[i]);
            added[s[i] - 'a'] = true;
        }
        return ans;
    }
};
