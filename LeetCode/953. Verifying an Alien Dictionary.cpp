class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map <char,int> mp;
        for(int i=0;i<order.size();i++)
            mp[order[i]]=i;
    
        int n=words.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<words[i].size();j++){
                words[i][j] = mp[words[i][j]];
            }
        }
        return is_sorted(words.begin(),words.end());
    }
};
