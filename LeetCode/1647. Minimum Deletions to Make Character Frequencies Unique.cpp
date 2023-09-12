class Solution {
public:
    int minDeletions(string s) {
        int n = s.size();
        unordered_map <char,int> mp;
        for(int i=0;i<n;i++)
            mp[s[i]]++;
        
        set <int> st;
        int count = 0;
        for(auto i:mp){
            while(i.second > 0 && st.find(i.second) != st.end()){
                count++;
                i.second--;
            }
            st.insert(i.second);
        }
        return count;
    }
};
