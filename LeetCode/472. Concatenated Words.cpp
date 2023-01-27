class Solution {
public:
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        unordered_set<string> mp;
        for (string word : words) 
            mp.insert(word);
        vector<string> v;
    
        for (string word : words) {
            int n = word.size();
            vector<int> dp(n + 1, 0);
            dp[0] = 1;
            for (int i = 0; i < n; i++) {
                if(!dp[i]) 
                    continue;
                for(int j=i+1;j<=n;j++) {
                    if (j-i<n && mp.count(word.substr(i,j-i))) 
                        dp[j] = 1;
                }
                if(dp[n]) {
                    v.push_back(word);
                    break;
                }
            }
        }
        return v;
    }
};
